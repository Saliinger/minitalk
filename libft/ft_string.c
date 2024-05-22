/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saliinger <saliinger@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:58:29 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/12 21:11:50 by saliinger        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_string(char *str)
{
	if (str)
		return (ft_putstr(str));
	else
		return (ft_putstr("(null)"));
}
