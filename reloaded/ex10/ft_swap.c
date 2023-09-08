/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrueger <bkrueger@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 21:39:08 by bkrueger          #+#    #+#             */
/*   Updated: 2023/09/05 21:48:07 by bkrueger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swapper;

	swapper = *a;
	*a = *b;
	*b = swapper;
}
/*
int	main(void)
{
	int	num1;
	int	num2;

	num1 = 2;
	num2 = 4;
	printf("%d%d\n", num1, num2);
	ft_swap(&num1, &num2);
	printf("%d%d\n", num1, num2);
	return (0);
}*/
