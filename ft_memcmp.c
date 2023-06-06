/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apylypen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:20:04 by apylypen          #+#    #+#             */
/*   Updated: 2023/01/19 15:32:00 by apylypen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)&s1[i] != *(unsigned char *)&s2[i])
			return (*(unsigned char *)&s1[i] - *(unsigned char *)&s2[i]);
		i++;
	}
	return (0);
}
