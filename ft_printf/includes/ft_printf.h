/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albherre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:24:39 by albherre          #+#    #+#             */
/*   Updated: 2024/03/26 16:24:41 by albherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdint.h>
# include <stdarg.h>
# include <stdlib.h>

/* printf */
int		ft_printf(const char *format, ...);
int		ft_formats(va_list args, const char format);
/* char */
int		ft_putchar(char c);
/* hex */
int		ft_puthex(unsigned int num, const char format);
/* nbr*/
char	*ft_itoa(int n);
int		ft_putnbr(int n);
/* ptr */
int		ft_ptrlength(uintptr_t num);
void	ft_printptr(uintptr_t num);
int		ft_putptr(unsigned long long ptr);
/* string */
int		ft_putstr(char *str);
/* unsigned */
int		ft_putunsigned(unsigned int n);
char	*ft_uitoa(unsigned int n);
/* utilities.c */
int		ft_getlength(long num);

#endif