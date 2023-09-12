/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrueger <bkrueger@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 01:24:25 by bkrueger          #+#    #+#             */
/*   Updated: 2023/09/12 19:03:33 by bkrueger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	whitespaces(char *str, int *ptr_i)
{
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while ((str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	*ptr_i = i;
	return (sign);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;
	int	i;

	result = 0;
	sign = whitespaces(str, &i);
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	while ((str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	result *= sign;
	return (result);
}
/*
int	main(void)
{
	printf("%d", ft_atoi("---2147483648--"));
	return (0);
}*/
