/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saliinger <saliinger@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:58:15 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/12 21:11:50 by saliinger        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_uint(int value)
{
	unsigned int	unsigned_value;

	if (value < 0)
		unsigned_value = (unsigned int)value + 4294967296;
	else
		unsigned_value = (unsigned int)value;
	ft_putnbr_u(unsigned_value);
	return (ft_countdigit_u(unsigned_value));
}
