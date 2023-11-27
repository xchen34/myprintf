/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leochen <leochen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:54:54 by leochen           #+#    #+#             */
/*   Updated: 2023/11/27 18:22:57 by leochen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char name[100] = "chen";
int	age = 5; 
printf("my names is %s, i'm %i years old.", name, age);

char	*conversion(char *msg, ...)
{
	int	 i;
	va_list	ap;
	char	*msg;

	ap = va_start(ap, msg);
	msg = calloc

	i = 0;
	while (msg[i] != '\0')
	{
		if (msg[i] != '%')
			ft_putchar_fd(msg[i], 1);
		if (msg[i] == '%' && msg[i + 1] == 'c')
			ft_putchar_fd(va_arg(ap, char), 1);
		if (msg[i] == '%' && msg[i + 1] == 's')
			ft_putstr_fd(va_arg(ap, char *), 1);
		if (msg[i] == '%' && msg[i + 1] == 'p')
			ft_putptr(va_arg(ap, void *));
		if (msg[i] == '%' && msg[i + 1] == 'd')
			ft_putnbr_fd(va_arg(ap, int), 1);
		if (msg[i] == '%' && msg[i + 1] == 'i')
			ft_putnbr_fd(va_arg(ap, int), 1);
		if (msg[i] == '%' && msg[i + 1] == 'u')
			ft_putnbr()
		if (msg[i] == '%' && msg[i + 1] == 'x')
			ft_puthex()
		if (msg[i] == '%' && msg[i + 1] == 'X')
			ft_putbighex()
		if (msg[i] == '%' && msg[i + 1] == '%')
			ft_putchar_fd('%', 1);
		i++;
	}
	return (msg);
}	


int	param_size(char curr, va_list params)
{
	int	printed;

	printed = 0;
	if (curr == 'c')
		printed = print_c(params);
	else if (curr == 's')
		printed = print_s(params);
	 else if (curr == 'p')	
		printed = print_p(params); 
	else if (curr == 'd')
		printed = print_d(params);
	else if (curr == 'i')	
		printed = print_i(params);
	else if (curr == 'u')
		printed = print_u(params);
	else if (curr == 'x')
		printed = print_x(params);
	else if (curr == 'X')
		printed = print_X(params);
	else if (curr == '%')
		printed = print_percent();
	return (printed)
}		

int ft_printf(const char *format, ...)
{
	va_list	params,
	int	printed;

	printed = 0;
	params = va_start(params, format);
	while (*format)
	{
		if (*format != '%')
		{
			ft_putchar_fd((*format, 1));
			format++;
			printed++;
		}
		else
		{
			printed= printed + param_size(*(format + 1), params)
			format = format + 2;		
		}
	}
	va_end(params);
	return (printed);
}
