/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacoelh <joacoelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:44:06 by joacoelh          #+#    #+#             */
/*   Updated: 2024/10/22 22:00:20 by joacoelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
 */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	long	s_len;

	s_len = ft_strlen(s);
	while (s_len >= 0)
	{
		if (s[s_len] == (char)c)
			return ((char *)(s + s_len));
		s_len--;
	}
	return (NULL);
}
