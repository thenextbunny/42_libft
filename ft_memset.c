/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacoelh <joacoelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 21:04:58 by joacoelh          #+#    #+#             */
/*   Updated: 2024/10/14 21:29:15 by joacoelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char			*memory;
	unsigned char	ch;
	size_t			i;

	ch = (unsigned char)c;
	i = 0;
	memory = (char *)s;
	while (i < n)
	{
		memory[i] = ch;
		i++;
	}
	return (s);
}
