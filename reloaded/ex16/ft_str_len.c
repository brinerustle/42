/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrueger <bkrueger@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:12:31 by bkrueger          #+#    #+#             */
/*   Updated: 2023/09/11 22:51:35 by bkrueger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i ++;
	}
	return (i);
}

int	main(void)
{
	char	*c;

	c = "abcdefghijklmnopqrstuvwxyz";
	printf("the string \"%s\" is %d characters long.\n", c, ft_strlen(c));
	return (0);
}
