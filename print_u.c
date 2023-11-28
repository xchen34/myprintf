/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leochen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:24:58 by leochen           #+#    #+#             */
/*   Updated: 2023/11/28 15:46:23 by leochen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_put_unsigned_int_fd(unsigned int n, int fd)
{
	if (n < 10)
		ft_putchar_fd(n + '0', fd);
	else
	{
		ft_put_unsigned_int_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
}

int	print_u(unsigned int nb)
{
	int	len;

	ft_put_unsigned_int_fd(nb, 1);
	if (nb == 0)
		return (1);
	len = ft_strlen(ft_itoa(nb);
	return (len);
}
