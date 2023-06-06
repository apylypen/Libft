/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apylypen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 18:49:24 by apylypen          #+#    #+#             */
/*   Updated: 2023/01/18 19:47:53 by apylypen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h" 

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	chet;

	i = 0;
	res = 0;
	chet = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			chet *= -1;
		i++;
	}
	while (str && str[i] >= 48 && str[i] <= 57)
	{
		res = (res * 10) + (str[i] - 48);
		i++;
	}
	return (res * chet);
}
/*
 #include <stdio.h>
 int	main(void)
 {
 	char c[] = "   ---32 3480jdlaj";
 	printf("%d", ft_atoi(c));
	return (0);
}*/
