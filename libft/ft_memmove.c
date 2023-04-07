/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrossi <lgrossi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 19:03:17 by lgrossi           #+#    #+#             */
/*   Updated: 2023/04/05 19:57:39 by lgrossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*s;
	const char	*s1;

	i = 0;
	s = (char *) dst;
	s1 = (const char *) src;
	while (s1[i] && i < len)
	{
		s[i] = s1[i];
		i++;
	}
	return (dst);
}
