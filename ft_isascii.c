/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apylypen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:32:13 by apylypen          #+#    #+#             */
/*   Updated: 2023/01/18 17:57:57 by apylypen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h" 

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h> 
int	main(void)
{
	int i;

	i = 128;
	printf ("%d\n", i);
	printf( "%d\n",ft_isascii(i));
	return (0);
}*/
