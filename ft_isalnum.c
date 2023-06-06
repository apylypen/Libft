/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apylypen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:19:22 by apylypen          #+#    #+#             */
/*   Updated: 2023/01/18 18:34:52 by apylypen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h" 

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;

	i = 67 ;
	printf ("%d\n", i);
	printf("%d\n",ft_isalnum(i));
	return (0);
}*/
