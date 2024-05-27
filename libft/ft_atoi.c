/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:46:19 by anoukan           #+#    #+#             */
/*   Updated: 2023/10/30 13:17:38 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int		i;
	int		number;
	int		signe;
	char	*cstr;

	i = 0;
	number = 0;
	signe = 1;
	cstr = (char *)str;
	while (cstr[i] == 32 || (cstr[i] >= 9 && cstr[i] <= 13))
		++i;
	if (cstr[i] == '-' || cstr[i] == '+')
	{
		if (cstr[i] == '-')
			signe *= -1;
		i++;
	}
	while (cstr[i] >= '0' && cstr[i] <= '9')
	{
		number *= 10;
		number += cstr[i] - '0';
		++i;
	}
	return (signe * number);
}
