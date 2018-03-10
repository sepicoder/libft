/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shomami <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 21:47:37 by shomami           #+#    #+#             */
/*   Updated: 2018/03/09 20:54:24 by shomami          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char const *str, char c)
{
	int words;

	words = 0;
	while (*str)
	{
		while (*str == c && *str)
			str++;
		if (*str != c && *str)
			words++;
		while (*str != c && *str)
			str++;
	}
	return (words);
}

char	**ft_strsplit(char const *s, char c)
{
	char 	**arr;
	int		words;
	int		i;
	int		letters;
	int		current;

	current = 0;
	letters = 0;
	i = 0;
	if (!s || !c)
		return (NULL);
	words = ft_wordcount(s, c);
	if (!(arr = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1))))
		return (NULL);
	arr[words] = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			letters = 0;
			while (s[i] != c && s[i])
			{
				letters++;
				i++;
			}
			arr[current++] = ft_strndup(&s[i - letters], letters);
		}
	}
	arr[current] = NULL;
	return (arr);
}
