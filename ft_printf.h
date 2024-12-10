/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielouarr <ielouarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 10:17:00 by ielouarr          #+#    #+#             */
/*   Updated: 2024/12/04 14:47:49 by ielouarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(char c, size_t *counter);
int		ft_putnbr(int num, size_t *counter);
int		ft_puthex(unsigned long num, char format, size_t *counter);
int		ft_putaddr(unsigned long n, size_t *counter);
int		ft_putstr(char *str, size_t *counter);
int		ft_putunsigned(unsigned int n, size_t *counter);

#endif