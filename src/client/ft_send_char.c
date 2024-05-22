/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_send_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:41:24 by anoukan           #+#    #+#             */
/*   Updated: 2024/05/21 10:16:47 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minitalk.h"

void	ft_send_char(char c, pid_t server_pid)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if (c & 128)
		{
			if (kill(server_pid, SIGUSR1) == -1)
				ft_error(0);
		}
		else
		{
			if (kill(server_pid, SIGUSR2) == -1)
				ft_error(0);
		}
		bit++;
		c <<= 1;
		pause();
	}
}
