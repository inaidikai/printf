/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inkahar <inkahar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:44:30 by inkahar           #+#    #+#             */
/*   Updated: 2023/12/05 17:22:03 by inkahar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa(unsigned long long int n, char format)
{
	int	y;

	y = 0;
	if (n >= 16)
	{
		y += ft_hexa(n / 16, format);
		y += ft_hexa(n % 16, format);
	}
	if (n >= 0 && n <= 9)
		y += ft_putchar(n + '0');
	else if (n >= 10 && n <= 15)
	{
		if (format == 'x')
		{
			n = n - 10 + 'a';
			y += ft_putchar(n);
		}
		else if (format == 'X')
		{
			n = n - 10 + 'A';
			y += ft_putchar(n);
		}
	}
	return (y);
}
