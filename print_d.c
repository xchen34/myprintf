/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leochen <leochen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:18:14 by leochen           #+#    #+#             */
/*   Updated: 2023/11/28 18:20:44 by leochen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_d(int	nb)
{
	int	len;

	ft_putnbr_fd(nb, 1);
	if (nb == 0)
		return (1);
	len = ft_strlen(ft_itoa(nb));
	return (len);
}
