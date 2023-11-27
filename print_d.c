/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leochen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:18:14 by leochen           #+#    #+#             */
/*   Updated: 2023/11/27 19:22:29 by leochen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_d(va_list params)
{
	int	len;

	ft_putnbr_fd(va_arg(params, int), 1);
	len = ft_strlen(ft_itoa(va_arg(params, int)));
	return (len);
}
