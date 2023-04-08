/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrossi <lgrossi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 19:03:17 by lgrossi           #+#    #+#             */
/*   Updated: 2023/04/08 16:44:31 by lgrossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*s;
	char		*s1;

	if (!dst || !src)
		return (NULL);
	i = 0;
	s = (char *) dst;
	s1 = (char *)malloc(len);
	if (!s1)
		return (NULL);
	while (i < len)
	{
		s1[i] = ((unsigned char *)src)[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		s[i] = s1[i];
		i++;
	}
	i++;
	free (s1);
	return (dst);
}
