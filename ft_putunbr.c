/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelhenriques <miguelhenriques@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 14:37:12 by miguelhenri       #+#    #+#             */
/*   Updated: 2024/12/26 18:27:43 by miguelhenri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putunbr(unsigned int nbr)
{
	int	i;

	i = 0;
	if (nbr > 9)
		i += ft_putunbr(nbr / 10);
	i += ft_putchar((nbr % 10) + '0');
	return (i);
}
