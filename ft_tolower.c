/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apylypen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:38:09 by apylypen          #+#    #+#             */
/*   Updated: 2023/01/18 18:47:29 by apylypen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h" 

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
/*
#include <stdio.h>
int	main(void)
{
	int i;

	i = 97;
	printf ("%d\n", i);
	printf( "%d\n",ft_tolower(i));
	return (0);
}*/
