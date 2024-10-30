/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacoelh <joacoelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 21:24:03 by joacoelh          #+#    #+#             */
/*   Updated: 2024/10/29 21:38:20 by joacoelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	number;

	number = n;
	if (number < 0)
	{
		ft_putchar_fd('-', fd);
		number *= -1;
	}
	if (number >= 10)
	{
		ft_putnbr_fd((number / 10), fd);
		number = number % 10;
	}
	if (number < 10)
		ft_putchar_fd((number + '0'), fd);
}
