/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrueger <bkrueger@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 23:12:47 by bkrueger          #+#    #+#             */
/*   Updated: 2023/09/11 23:51:07 by bkrueger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i ++;
		}
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char *s1 = "somestring";
	char *s2 = "";

	printf("\"%s\" minus \"%s\" equals %d.\n", s1, s2, ft_strcmp(s1, s2));
	return (0);
}*/
