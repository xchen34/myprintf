/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leochen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:26:33 by leochen           #+#    #+#             */
/*   Updated: 2023/11/27 19:17:50 by leochen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_s(va_list params)
{
	if (va_arg(params, char *) == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	ft_putstr_fd(va_arg(params, char *), 1);
	return (ft_strlen(va_arg(params)));
}
