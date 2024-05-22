/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_waitlist.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 09:19:25 by anoukan           #+#    #+#             */
/*   Updated: 2024/05/21 13:28:51 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minitalk.h"

t_client	**init_waitlist(void)
{
	t_client	**waitlist;

	waitlist = (t_client **)malloc(sizeof(t_client *) + 1);
	if (!waitlist)
		ft_error(1);
	*waitlist = NULL;
	return (waitlist);
}
