/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apylypen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:35:12 by apylypen          #+#    #+#             */
/*   Updated: 2023/01/18 18:57:23 by apylypen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h" 

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
/*
#include <stdio.h> 
int	main(void)
{
	int i;

	i = 91;
	printf ("%d\n", i);
	printf( "%d\n",ft_toupper(i));
	return (0);
}*/
