/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handler.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 12:31:38 by anoukan           #+#    #+#             */
/*   Updated: 2024/05/20 14:09:23 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minitalk.h"

void	client_handler(int sig)
{
	static int	bit_sent = 1;

	if (sig == SIGUSR1) {
        bit_sent++;
        ft_printf("bit sent : %d\n", bit_sent);
    }
	if (sig == SIGUSR2)
	{
		ft_printf("Message sent. %d bit sent\n", bit_sent);
		bit_sent = 0;
		exit(EXIT_SUCCESS);
	}
}
