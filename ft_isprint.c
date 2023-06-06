/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apylypen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:34:05 by apylypen          #+#    #+#             */
/*   Updated: 2023/01/18 17:58:12 by apylypen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h" 

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	int i;

	i = 67;
	printf ("%d\n", i);
	printf( "%d\n",ft_isprint(i));
	return (0);
}*/
