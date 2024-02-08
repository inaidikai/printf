/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uputnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inkahar <inkahar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 20:29:16 by inkahar           #+#    #+#             */
/*   Updated: 2023/12/05 15:51:07 by inkahar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_uputnbr(unsigned int nb)
{
	int	u;

	u = 0;
	if (nb > 9)
	{
		u += ft_uputnbr(nb / 10);
		u += ft_uputnbr(nb % 10);
	}
	if (nb >= 0 && nb <= 9)
		u += ft_putchar(nb + '0');
	return (u);
}
