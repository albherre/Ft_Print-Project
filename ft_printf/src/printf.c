/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albherre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 18:25:25 by albherre          #+#    #+#             */
/*   Updated: 2024/03/28 18:25:29 by albherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_formats(va_list args, const char format)
{
	int	print_length;

	print_length = 0;
	if (format == 'c')
		print_length += ft_putchar(va_arg(args, int));
	else if (format == 's')
		print_length += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		print_length += ft_putptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		print_length += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		print_length += ft_putunsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		print_length += ft_puthex(va_arg(args, unsigned int), format);
	else if (format == '%')
		print_length += ft_putchar('%');
	return (print_length);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	args;
	int		print_length;

	i = 0;
	print_length = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			print_length += ft_formats(args, format[i + 1]);
			i++;
		}
		else
			print_length += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (print_length);
}
