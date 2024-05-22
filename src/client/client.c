/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:25:08 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/30 14:53:44 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minitalk.h"

int	main(int argc, char **argv)
{
	int	server_pid;
	int	client_pid;

	client_pid = getpid();
	ft_banner(0, client_pid);
	if (argc == 3)
	{
		signal(SIGUSR1, client_handler);
		signal(SIGUSR2, client_handler);
		server_pid = ft_atoi(argv[1]);
		ft_send_message(argv[2], server_pid);
	}
	else
		ft_printf("usage: ./client <server_pid> <text to send>\n");
	return (EXIT_FAILURE);
}
