/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inkahar <inkahar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 10:08:13 by inkahar           #+#    #+#             */
/*   Updated: 2023/12/05 18:31:05 by inkahar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	formats(va_list list, const char format)
{
	int	ptr;

	ptr = 0;
	if (format == 'c')
		ptr += ft_putchar((va_arg(list, int)));
	else if (format == 's')
		ptr += ft_putstr(va_arg(list, char *));
	else if (format == 'p')
		ptr += ft_hex(va_arg(list, void *));
	else if (format == 'd' || format == 'i')
		ptr += ft_putnbr(va_arg(list, int));
	else if (format == 'u')
		ptr += ft_uputnbr(va_arg(list, unsigned int));
	else if (format == 'x' || format == 'X')
		ptr += ft_hexa(va_arg(list, unsigned int), format);
	else if (format == '%')
		ptr += ft_putchar('%');
	return (ptr);
}

int	ft_printf(const char *format, ...)
{
	va_list	list;
	int		result;
	int		i;

	i = 0;
	result = 0;
	va_start(list, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			result += formats(list, format[i + 1]);
			i++;
		}
		else
			result += ft_putchar(format[i]);
		i++;
	}
	va_end(list);
	return (result);
}

// int main()
// {
// 	ft_printf("%s, %x\n","t,t,r,e", 15);
// 	printf("%s, %x\n","t,t,r,e", 15);
// }