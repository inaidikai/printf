/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inkahar <inkahar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:41:12 by inkahar           #+#    #+#             */
/*   Updated: 2023/12/05 19:00:17 by inkahar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	u;

	u = 0;
	if (nb == -2147483648)
	{
		u += ft_putchar('-');
		u += ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		u += ft_putchar('-');
		nb = nb * -1;
	}
	if (nb > 9)
	{
		u += ft_putnbr(nb / 10);
		u += ft_putnbr(nb % 10);
	}
	if (nb >= 0 && nb <= 9)
		u += ft_putchar(nb + '0');
	return (u);
}
