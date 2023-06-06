/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apylypen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:47:55 by apylypen          #+#    #+#             */
/*   Updated: 2023/01/25 16:31:04 by apylypen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	size_t	i;

	i = count * size;
	if (count == 0 || size == 0)
	{
		str = malloc(0);
		return (str);
	}
	if (i / count != size)
		return (0);
	str = malloc(i);
	if (!str)
		return (0);
	ft_bzero(str, i);
	return (str);
}
