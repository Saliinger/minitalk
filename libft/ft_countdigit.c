/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdigit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saliinger <saliinger@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0008/11/20 12:27:11 by noukan            #+#    #+#             */
/*   Updated: 2024/04/12 21:11:50 by saliinger        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countdigit(long nbr)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		i++;
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

int	ft_hexcount(unsigned int nbr)
{
	int	i;

	i = 0;
	while (nbr)
	{
		nbr = nbr / 16;
		i++;
	}
	return (i);
}

int	ft_ptrlen(uintptr_t ptr)
{
	int	i;

	i = 0;
	while (ptr)
	{
		ptr = ptr / 16;
		i++;
	}
	return (i);
}

int	ft_countdigit_u(unsigned long nbr)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}
