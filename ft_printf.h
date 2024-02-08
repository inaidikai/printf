/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inkahar <inkahar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 10:36:17 by inkahar           #+#    #+#             */
/*   Updated: 2023/12/06 14:40:13 by inkahar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int				ft_printf(const char *format, ...);
unsigned int	ft_uputnbr(unsigned int nb);
int				ft_hex(void *nb);
int				ft_hexa(unsigned long long int n, char format);
int				ft_putchar(char c);
int				ft_putnbr(int nb);
int				ft_putstr(char *s);
#endif