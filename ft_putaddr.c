/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielouarr <ielouarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:37:07 by ielouarr          #+#    #+#             */
/*   Updated: 2024/12/04 14:47:30 by ielouarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putaddr(unsigned long n, size_t *counter)
{
	if (ft_putstr("0x", counter) == -1)
		return (-1);
	return (ft_puthex(n, 'x', counter));
}
