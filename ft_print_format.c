/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelhenriques <miguelhenriques@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 11:20:58 by miguelhenri       #+#    #+#             */
/*   Updated: 2024/12/26 18:12:50 by miguelhenri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_print_format(char fmt, va_list ap)
{
	int	count;

	count = 0;
	if (fmt == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (fmt == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (fmt == 'd' || fmt == 'i')
		count += ft_putnbr(va_arg(ap, int));
	else if (fmt == 'u')
		count += ft_putunbr(va_arg(ap, unsigned int));
	else if (fmt == 'X' || fmt == 'x')
		count += ft_puthexa(va_arg(ap, unsigned int), fmt);
	else if (fmt == 'p')
		count += ft_putptr(va_arg(ap, unsigned long));
	else if (fmt == '%')
		count += ft_putchar('%');
	else
		count += write(1, &fmt, 1);
	va_end(ap);
	return (count);
}
