/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handler.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:12:23 by anoukan           #+#    #+#             */
/*   Updated: 2024/05/22 20:47:09 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minitalk.h"

void	extend_handler(t_client *current_client, pid_t current_pid,
		t_client **waitlist)
{
	current_client->bit_received++;
	current_client->bit++;
	if (current_client->bit == 8)
	{
		current_client->message = ft_strjoin_frees1(current_client->message,
				current_client->current_char);
		current_client->bit = 0;
		if (current_client->current_char[0] == '\0')
		{
			print_message(current_client, waitlist);
			usleep(1000);
			kill(current_pid, SIGUSR2);
		}
		else
			current_client->current_char[0] = 0;
	}
	else
		current_client->current_char[0] <<= 1;
	usleep(1000);
	if (kill(current_pid, SIGUSR1) == -1)
		remove_client(current_client, waitlist);
}

void	server_handler(int signum, siginfo_t *info, void *context)
{
	static t_client	**waitlist;
	t_client		*current_client;

	(void)context;
	if (!waitlist)
		waitlist = init_waitlist();
	current_client = find_client(info->si_pid, waitlist);
	if (current_client == NULL)
	{
		add_client(waitlist, info->si_pid);
		current_client = find_client(info->si_pid, waitlist);
		if (current_client == NULL)
		{
			free_waitlist(waitlist);
			ft_error(1);
		}
	}
	current_client->current_char[0] |= (signum == SIGUSR1);
	extend_handler(current_client, info->si_pid, waitlist);
}
