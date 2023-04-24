/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzogrossi <lorenzogrossi@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 20:27:36 by lgrossi           #+#    #+#             */
/*   Updated: 2023/04/14 19:36:00 by lorenzogros      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;
	int		bytes;

	if (count + size < count || count + size < size)
		return (NULL);
	bytes = (count * size);
	str = malloc(count * size);
	if (!str)
		return (0);
	while (bytes--)
		((char *)str)[bytes] = 0;
	return (str);
}
