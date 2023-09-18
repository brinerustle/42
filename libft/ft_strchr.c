/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrueger <bkrueger@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 00:18:53 by bkrueger          #+#    #+#             */
/*   Updated: 2023/09/18 23:37:50 by bkrueger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && (*s != (char) c))
		s ++;
	if ((*s == (char) c) || c == '\0')
		return ((char *)s);
	return (NULL);
}

int	main (void)
{
	char	s[] = "\0";
	char	c = 'o';
	printf("strchr '%c' in '%s' at '%s'.\n", c, s, strchr(s, c));
	printf("ft_strchr '%c' in '%s' at '%s'.\n", c, s, ft_strchr(s, c));
	return (0);
}
