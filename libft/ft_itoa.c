/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrossi <lgrossi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 19:36:19 by lgrossi           #+#    #+#             */
/*   Updated: 2023/04/05 19:57:17 by lgrossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	n_counter(int n)
{
	int	i;

	i = 0;
	while (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_s(char	*s, int n, int i, int count)
{
	if (n == 0)
	{
		s[0] = '0';
		s[1] = 0;
		return (s);
	}
	while (i >= 0)
	{
		s[i] = (n % 10) + 48;
		i--;
		n /= 10;
	}
	if (count < 0)
	s[0] = '-';
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		i;
	int		count;

	count = 1;
	i = n_counter(n);
	if (n < 0)
	{
	count = -1;
	n = -n;
	}
	s = (char *)malloc(i + 1);
	if (!s)
		return (NULL);
	s[i] = 0;
	i--;
	ft_s(s, n, i, count);
	return (s);
}
