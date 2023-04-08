/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrossi <lgrossi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 18:59:22 by lgrossi           #+#    #+#             */
/*   Updated: 2023/04/08 20:19:58 by lgrossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	s;

	s = (size_t)sizeof(dst);
	j = 0;
	i = ft_strlen(dst);
	if (!dst || dstsize == 0)
		return (0);
	while ((dst - dstsize) >= 0 && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = 0;
	return (i);
}

/*int main() {
    char str1[20] = "Hello, ";
    char str2[] = "world!";
    char str3[10] = "Ciao";
    char str4[] = "mondo!";
    size_t str1_size = 20;
    size_t str1_len = strlen(str1);
    size_t str2_len = strlen(str2);
    size_t str3_size = sizeof(str3);
    size_t str3_len = strlen(str3);
    size_t str4_len = strlen(str4);
    size_t result1, result2;

    result1 = strlcat(str1, str2, str1_size);
    printf("Stringa concatenata: %s\n", str1);
    printf("Lunghezza finale della stringa: %zu\n", str1_len + str2_len);
    printf("Valore restituito dalla funzione: %zu\n\n", result1);

    result2 = strlcat(str3, str4, str3_size);
    printf("Stringa concatenata: %s\n", str3);
    printf("Lunghezza finale della stringa: %zu\n", str3_len + str4_len);
    printf("Valore restituito dalla funzione: %zu\n", result2);

    return 0;
}*/