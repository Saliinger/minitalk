/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_frees1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:53:52 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/27 13:39:38 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

static char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin_frees1(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*d;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	d = (char *)malloc(i + j + 1);
	if (d == NULL)
		return (free(s1), s1 = NULL, free(s2), s2 = NULL, NULL);
	ft_strcpy(d, (char *)s1);
	ft_strcpy(d + i, (char *)s2);
	free(s1);
	return (d);
}
