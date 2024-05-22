/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_message.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:32:00 by anoukan           #+#    #+#             */
/*   Updated: 2024/05/21 13:29:02 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minitalk.h"

void	print_message(t_client *client, t_client **waitlist)
{
	if (client)
	{
		ft_printf("%s", client->message);
		ft_printf("\nbits received: %d from: %d\n", client->bit_received,
			client->pid);
		remove_client(client, waitlist);
	}
}
