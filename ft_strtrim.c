/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacoelh <joacoelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 20:55:20 by joacoelh          #+#    #+#             */
/*   Updated: 2024/10/29 21:23:26 by joacoelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_set(char const *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;

	if (!s1 && !set)
		return (NULL);
	start = 0;
	while (s1[start] && is_set(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && is_set(set, s1[end - 1]))
		end--;
	str = (char *)malloc((end - start + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + start, end - start + 1);
	str[end - start] = '\0';
	return (str);
}
