/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrossi <lgrossi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 20:27:36 by lgrossi           #+#    #+#             */
/*   Updated: 2023/04/05 19:56:54 by lgrossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*str;

	str = malloc(count * size);
	i = 0;
	if (!str)
		return (0);
	while (i < count * size)
	{
		((char *)str)[i] = 0;
		i++;
	}
	return (str);
}
