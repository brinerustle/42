/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrueger <bkrueger@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 06:15:31 by bkrueger          #+#    #+#             */
/*   Updated: 2023/09/12 18:33:10 by bkrueger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int i)
{
	return (i >= '0' && i <= '9');
}
/*
int	main(void)
{
	char c = '.';
	while (c < '=')
	{
		printf("%d with isaplha returns %d\n", c, ft_isdigit(c));
		c ++;
	}
	return (0);
}*/
