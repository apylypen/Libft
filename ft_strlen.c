/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apylypen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:40:39 by apylypen          #+#    #+#             */
/*   Updated: 2023/01/18 18:24:31 by apylypen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h" 

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
#include <stdio.h> 
int	main(void)
{
	const char	c[] = "Lalala";
	printf( "%s\n",c);
	printf( "%d\n",ft_strlen(c));
	return (0);
}*/
