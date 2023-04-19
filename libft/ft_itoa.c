/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzogrossi <lorenzogrossi@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 19:36:19 by lgrossi           #+#    #+#             */
/*   Updated: 2023/04/15 16:55:37 by lorenzogros      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static	size_t	get_count(int n)
{
	size_t	count;

	count = 1;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*s;
	size_t	i;
	
	i = get_count(n) - 1;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
		s = (char *)malloc(i + 1);
		if (!s)
		return (NULL);
	if	(n < 0)
	{
		s[0] = '-';
		n = -n;
	}
	s[i] = 0;
	i--;
	while(n != 0 && s[i] != '-')
		{
		s[i--] = n % 10 + '0';
		n /= 10;
		}
	return (s);
}