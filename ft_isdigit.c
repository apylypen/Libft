/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apylypen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:15:14 by apylypen          #+#    #+#             */
/*   Updated: 2023/01/18 17:56:41 by apylypen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h" 

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	int i;

	i = 57;
	printf ("%d\n", i);
	printf( "%d\n",ft_isdigit(i));
	return (0);
}*/
