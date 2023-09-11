/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrueger <bkrueger@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 00:20:38 by bkrueger          #+#    #+#             */
/*   Updated: 2023/09/12 00:45:39 by bkrueger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i ++;
	}
}
int	main(int argc, char *argv[])
{
	int	i;
	char *str;

	i = 1;
	str = "abc";
	while (i < argc)
	{
		if (ft_strcmp(str, argv[i]) <= 0)
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
		}
		i ++;
	}
	return (0);
}
