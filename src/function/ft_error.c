/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 12:08:45 by anoukan           #+#    #+#             */
/*   Updated: 2024/05/01 12:33:47 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minitalk.h"

void	ft_error(int app)
{
	if (app == CLIENT)
	{
		ft_printf("client: error\n");
		exit(EXIT_FAILURE);
	}
	else if (app == SERVER)
	{
		ft_printf("server: error\n");
		exit(EXIT_FAILURE);
	}
}
