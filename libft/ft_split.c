/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrossi <lgrossi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 19:09:15 by lgrossi           #+#    #+#             */
/*   Updated: 2023/04/08 17:00:46 by lgrossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	words_count(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c)
		i++;
		if (s[i] != c && s[i] != 0)
		words++;
		while (s[i] && s[i] != c)
		i++;
	}
	return (words);
}

int	let_count(char const *s, char c, int i)
{
	int	letters;

	letters = 0;
	while (s[i] && s[i] != c)
	{
		letters++;
		i++;
	}
	return (letters);
}

void	s_create(char *s1, char const *s, char c, int i)
{
	int	j;

	j = 0;
	while (s[i] != c && s[i])
	{
		s1[j] = s[i];
		i++;
		j++;
	}
	s1[j] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**s1;
	int		words;
	int		i;
	int		j;

i = 0;
j = 0;
words = 0;
	if (!s)
		return (NULL);
s1 = (char **)malloc((words_count(s, c) + 1) * (sizeof(char *)));
	if (!s1 || !s)
		return (NULL);
	while (words < words_count(s, c))
	{
		while (s[i] == c)
		i++;
		s1[words] = (char *)malloc(let_count(s, c, i) + 1);
		s_create(s1[words], s, c, i);
		while (s[i] != c && s[i])
			i++;
		words++;
	}
s1[words] = 0;
	return (s1);
}
