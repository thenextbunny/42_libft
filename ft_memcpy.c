/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacoelh <joacoelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 21:40:05 by joacoelh          #+#    #+#             */
/*   Updated: 2024/10/22 22:48:07 by joacoelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest_cpy;
	char	*src_cpy;
	size_t	i;

	if (dest == NULL && src == NULL)
		return (NULL);
	dest_cpy = (char *)dest;
	src_cpy = (char *)src;
	i = 0;
	while (i < n)
	{
		dest_cpy[i] = src_cpy[i];
		i++;
	}
	return (dest);
}
