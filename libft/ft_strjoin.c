/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrossi <lgrossi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 16:30:11 by lgrossi           #+#    #+#             */
/*   Updated: 2023/04/05 19:58:11 by lgrossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strln(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	i++;
	return (i);
}

char	*ft_ss(const char *s1, const char *s2, char *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] && s2[j])
	{
		while (s1[j])
		{
			s[i] = s1[j];
			i++;
			j++;
		}
		j = 0;
		while (s2[j])
		{
			s[i] = s2[j];
			i++;
			j++;
		}
	}
	return (s);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;

	s = (char *)malloc(sizeof(char) *(ft_strln(s2) + ft_strln(s1) + 1));
	if (!s)
		return (NULL);
	ft_ss(s1, s2, s);
	return (s);
}
