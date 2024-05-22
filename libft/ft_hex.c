/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saliinger <saliinger@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0006/11/20 14:18:23 by noukan            #+#    #+#             */
/*   Updated: 2024/04/12 21:11:50 by saliinger        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnb(unsigned int nb, const char c)
{
	if (nb >= 16)
	{
		ft_putnb(nb / 16, c);
		ft_putnb(nb % 16, c);
	}
	else
	{
		if (nb <= 9)
			ft_printchar(nb + '0');
		else
		{
			if (c == 'x')
				ft_printchar(nb - 10 + 'a');
			if (c == 'X')
				ft_printchar(nb - 10 + 'A');
		}
	}
}

int	ft_hex(unsigned int nb, const char c)
{
	if (nb == 0)
		return (ft_printchar('0'));
	else
		ft_putnb(nb, c);
	return (ft_hexcount(nb));
}
