/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saliinger <saliinger@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:56:29 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/12 21:11:50 by saliinger        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_u(unsigned long nbr)
{
	if (nbr <= 9)
		ft_printchar(nbr + '0');
	else
	{
		ft_putnbr_u(nbr / 10);
		ft_printchar(nbr % 10 + '0');
	}
}
