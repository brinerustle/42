/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrueger <bkrueger@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:07:36 by bkrueger          #+#    #+#             */
/*   Updated: 2023/09/11 22:11:02 by bkrueger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		return (0);
	}
	else
	{
		while (i < 46341)
		{
			if (nb == i * i)
			{
				return (i);
			}
			i ++;
		}
		return (0);
	}
}
/*
int	main (void)
{
	int nb = -2147483647;
	printf("square root of %d is %d\n", nb, ft_sqrt(nb));
	return (0);
}*/
