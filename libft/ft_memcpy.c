/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrossi <lgrossi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:43:44 by lgrossi           #+#    #+#             */
/*   Updated: 2023/04/07 18:21:53 by lgrossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dest;
	const char	*source;
	size_t		i;

	dest = (char *) dst;
	source = (const char *) src;
	i = 0;
	while (dest[i] && source[i] && i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dest);
}
