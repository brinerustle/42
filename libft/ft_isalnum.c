/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrueger <bkrueger@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 06:22:18 by bkrueger          #+#    #+#             */
/*   Updated: 2023/09/12 18:31:12 by bkrueger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int i)
{
	if (((i >= 'A') && (i <= 'Z')) || ((i >= 'a') && (i <= 'z')))
	{
		return (1);
	}
	else if ((i >= '0') && (i <= '9'))
	{
		return (1);
	}
	return (0);
}