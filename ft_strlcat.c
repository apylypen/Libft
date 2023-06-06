/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apylypen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:56:14 by apylypen          #+#    #+#             */
/*   Updated: 2023/02/01 17:00:51 by apylypen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	slen;

	i = 0;
	j = 0;
	slen = ft_strlen(src);
	if (!dest && size == 0)
		return (slen);
	while (dest[i] && i < size)
		i++;
	if (size > 0)
	{
		while (src[j] && i + 1 < size)
		{
			dest[i++] = src[j++];
		}
	}
	if (j > 0)
	{
		dest[i] = '\0';
		return (slen + i - j);
	}
	return (slen + i);
}
