/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrossi <lgrossi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 15:06:00 by lgrossi           #+#    #+#             */
/*   Updated: 2023/04/05 19:58:47 by lgrossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{	
	size_t	i;
	char	*s1;

	i = 0;
	while (s[i])
	i++;
	s1 = (char *)malloc(sizeof(char) * (i +1));
	if (!s1)
		return (NULL);
	i = 0;
	while (i < len && s[start] && start <= len)
	{
		s1[i] = s[start];
		start++;
		i++;
	}
	s1[i] = 0;
	return (s1);
}
