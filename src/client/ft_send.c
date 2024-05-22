/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_send.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:41:11 by anoukan           #+#    #+#             */
/*   Updated: 2024/05/01 13:36:24 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minitalk.h"

void	ft_send_message(char *str, pid_t server_pid)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_send_char(str[i], server_pid);
		i++;
	}
	ft_send_char('\0', server_pid);
}
