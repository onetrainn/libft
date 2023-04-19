/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzogrossi <lorenzogrossi@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 16:08:57 by lorenzogros       #+#    #+#             */
/*   Updated: 2023/04/16 16:29:05 by lorenzogros      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content1)
{
	t_list *new;
	
	new = malloc(sizeof(t_list));
	new -> content = content1;
	new -> next = NULL;
	return (new); 
}