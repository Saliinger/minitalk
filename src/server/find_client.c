/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_client.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:05:27 by anoukan           #+#    #+#             */
/*   Updated: 2024/05/21 13:28:17 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minitalk.h"

t_client	*find_client(pid_t client, t_client **list)
{
	t_client	*temp;

	if (!*list)
		return (NULL);
	temp = *list;
	while (temp)
	{
		if (temp->pid == client)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}
