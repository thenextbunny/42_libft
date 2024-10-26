/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacoelh <joacoelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:12:51 by joacoelh          #+#    #+#             */
/*   Updated: 2024/10/25 20:57:08 by joacoelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;

	little_len = ft_strlen(little);
	if (!*little)
		return ((char *)big);
	while (*big && len >= little_len)
	{
		if (!ft_memcmp(big, little, little_len))
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
