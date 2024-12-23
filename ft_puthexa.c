/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelhenriques <miguelhenriques@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 11:36:58 by miguelhenri       #+#    #+#             */
/*   Updated: 2024/12/26 18:07:50 by miguelhenri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_puthexa(unsigned long n, char format)
{
	char	*base;
	int		i;

	if (format == 'x')
		base = "0123456789abcdef";
	else if (format == 'X')
		base = "0123456789ABCDEF";
	i = 0;
	if (n >= 16)
	{
		i += ft_puthexa(n / 16, format);
		i += ft_puthexa(n % 16, format);
	}
	else if (n < 16)
		i += ft_putchar(base[n]);
	return (i);
}
