/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrossi <lgrossi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:20:05 by lgrossi           #+#    #+#             */
/*   Updated: 2023/04/24 15:53:47 by lgrossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*f;

	f = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (f[i] == (unsigned char)c)
			return ((char *)(s + i));
	i++;
	}
	return (0);
}
