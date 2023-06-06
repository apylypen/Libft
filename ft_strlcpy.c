/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apylypen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 18:32:49 by apylypen          #+#    #+#             */
/*   Updated: 2023/01/18 19:07:01 by apylypen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *str);

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (j);
}
/*
#include  <stdio.h>
int	main(void)
{
	char s[] = "Lalal";
	char s1[] = "Lol";
	printf( "%s\n",s);
	printf( "%s\n",s1);
	printf( "%d\n",ft_strlcpy(s,s1,2));
	return (0);
}*/
