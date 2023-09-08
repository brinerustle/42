/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrueger <bkrueger@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 11:03:03 by bkrueger          #+#    #+#             */
/*   Updated: 2023/09/08 11:21:07 by bkrueger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb >= 1 && nb < 13)
	{
		return (nb * ft_recursive_factorial(nb -1));
	}
	if (nb == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int main (void)
{
	int	nb = -2;
	while (nb < 14)
	{
		printf("factorial of %d is %d\n", nb, ft_recursive_factorial(nb));
		nb ++;
	}
	return (0);
}*/
