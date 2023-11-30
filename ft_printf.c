/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leochen <leochen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:54:54 by leochen           #+#    #+#             */
/*   Updated: 2023/11/30 19:00:00 by leochen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//#include <stdio.h>

static int	param_size(char flag, va_list params)
{
	int	printed;

	printed = 0;
	if (flag == 'c')
		printed = print_c(va_arg(params, int));
	else if (flag == 's')
		printed = print_s(va_arg(params, char *));
	else if (flag == 'p')
		printed = print_p(va_arg(params, void *));
	else if (flag == 'i' || flag == 'd')
		printed = print_d(va_arg(params, int));
	else if (flag == 'u')
		printed = print_u(va_arg(params, unsigned int));
	else if (flag == 'x')
		printed = print_x(va_arg(params, unsigned int), 0);
	else if (flag == 'X')
		printed = print_x(va_arg(params, unsigned int), 1);
	else if (flag == '%')
	{
		ft_putchar_fd('%', 1);
		printed = 1;
	}
	return (printed);
}

int	ft_printf(const char *format, ...)
{
	va_list	params;
	int		printed;

	printed = 0;
	if (!format)
		return (-1);
	va_start(params, format);
	while (*format)
	{
		if (*format != '%')
		{
			ft_putchar_fd(*format, 1);
			format++;
			printed++;
		}
		else
		{
			printed = printed + param_size(*(format + 1), params);
			format = format + 2;
		}
	}
	va_end(params);
	return (printed);
}
