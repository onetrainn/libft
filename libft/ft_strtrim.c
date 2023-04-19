/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzogrossi <lorenzogrossi@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 17:38:53 by lgrossi           #+#    #+#             */
/*   Updated: 2023/04/14 17:11:16 by lorenzogros      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
    char       *s;
    size_t     start;    
    size_t     end;
    size_t     len;
    
    if (!s1)
        return (NULL);
    if (!set)
        return (ft_strdup(s1));
        
    start = 0;
    end = ft_strlen(s1);
    while (ft_strchr(set,s1[start]) && s1[start])
    start++;
    while (ft_strchr(set,s1[end]) && end > start)
    end--;
    len = end - start;
    s = ft_substr(s1, start, len + 1);
    if (!s)
        return (NULL);
    return (s);
}