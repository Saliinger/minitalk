/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointeurhex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saliinger <saliinger@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:14:14 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/12 21:11:50 by saliinger        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printptr(uintptr_t ptr)
{
	if (ptr >= 16)
	{
		ft_printptr(ptr / 16);
		ft_printptr(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
			ft_printchar(ptr + '0');
		else
			ft_printchar(ptr - 10 + 'a');
	}
}

int	ft_pointertohex(unsigned long long ptr)
{
	int	i;

	i = 0;
	i += ft_putstr("0x");
	if (ptr == 0)
		i += ft_printchar('0');
	else
	{
		ft_printptr(ptr);
		i += ft_ptrlen(ptr);
	}
	return (i);
}
