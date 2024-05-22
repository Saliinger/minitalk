/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_client.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:13:07 by anoukan           #+#    #+#             */
/*   Updated: 2024/05/21 13:27:56 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minitalk.h"

void	add_client(t_client **waitlist, pid_t pid)
{
	t_client	*new;
	t_client	*top;

	top = *waitlist;
	new = (t_client *)malloc(sizeof(t_client));
	if (!new)
	{
		printf("!new\n");
		free_waitlist(waitlist);
	}
	new->current_char = (char *)malloc(sizeof(char) * 2);
	if (!new->current_char)
		free_waitlist(waitlist);
	new->current_char[0] = 0;
	new->current_char[1] = '\0';
	new->message = (char *)malloc(sizeof(char) * 1);
	new->message[0] = '\0';
	new->pid = pid;
	new->bit = 0;
	new->bit_received = 0;
	new->next = top;
	*waitlist = new;
}
