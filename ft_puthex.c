/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielouarr <ielouarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 14:11:24 by ielouarr          #+#    #+#             */
/*   Updated: 2024/12/04 15:05:38 by ielouarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long num, char format, size_t *counter)
{
	char	*base;

	if (format == 'x')
		base = "0123456789abcdef";
	else if (format == 'X')
		base = "0123456789ABCDEF";
	if (num >= 16)
	{
		if (ft_puthex(num / 16, format, counter) == -1)
			return (-1);
	}
	if (ft_putchar(base[num % 16], counter) == -1)
		return (-1);
	return (0);
}
