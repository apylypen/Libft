/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apylypen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:57:13 by apylypen          #+#    #+#             */
/*   Updated: 2023/01/18 17:56:13 by apylypen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h" 

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
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
	printf( "%d\n",ft_isalpha(i));
	return (0);
}*/
