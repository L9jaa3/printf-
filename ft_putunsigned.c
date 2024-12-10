/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielouarr <ielouarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 14:20:58 by ielouarr          #+#    #+#             */
/*   Updated: 2024/12/04 14:38:25 by ielouarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int n, size_t *counter)
{
	if (n >= 10)
	{
		if (ft_putunsigned(n / 10, counter) == -1)
			return (-1);
	}
	if (ft_putchar((n % 10) + '0', counter) == -1)
		return (-1);
	return (0);
}
