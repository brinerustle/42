/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrueger <bkrueger@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 21:49:15 by bkrueger          #+#    #+#             */
/*   Updated: 2023/09/05 21:59:10 by bkrueger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a = 57;
	int b = 10;
	int div = 42;
	int mod = 24;
	printf("a = %d, b = %d, div = %d, mod = %d\n", a, b, div, mod);
	ft_div_mod(a, b, &div, &mod);
	printf("a = %d, b = %d, div = %d, mod = %d\n", a, b, div, mod);
}*/
