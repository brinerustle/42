/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrueger <bkrueger@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 22:00:51 by bkrueger          #+#    #+#             */
/*   Updated: 2023/09/05 22:35:00 by bkrueger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (nb >= 1)
	{
		factorial *= nb;
		nb -= 1;
	}
	return (factorial);
}
/*
int	main(void)
{
	int n = 12;
	printf("factorial of %d is %d\n", n, ft_iterative_factorial(n));
	return (0);
}*/
