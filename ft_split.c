/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacoelh <joacoelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 20:42:17 by joacoelh          #+#    #+#             */
/*   Updated: 2024/11/06 20:53:40 by joacoelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_word(char const *s, char c)
{
	size_t	i;

	if (!*s)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			i++;
		while (*s != c && *s)
		{
			s++;
		}
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		i;
	size_t	word_len;

	words = (char **)malloc((ft_count_word(s, c) + 1) * sizeof(char *));
	if (!s || !words)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			words[i] = ft_substr(s, 0, word_len);
			s += word_len;
			i++;
		}
	}
	words[i] = NULL;
	return (words);
}
