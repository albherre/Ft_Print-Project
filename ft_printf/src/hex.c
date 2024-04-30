/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albherre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 07:38:27 by albherre          #+#    #+#             */
/*   Updated: 2024/04/16 07:38:28 by albherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_puthex(unsigned int num, const char format)
{
	int	print_length;

	print_length = 0;
	if (num >= 16)
	{
		print_length += ft_puthex(num / 16, format);
		print_length += ft_puthex(num % 16, format);
	}
	else
	{
		if (num <= 9)
			print_length += ft_putchar(num + '0');
		else
		{
			if (format == 'x')
				print_length += ft_putchar(num - 10 + 'a');
			if (format == 'X')
				print_length += ft_putchar(num - 10 + 'A');
		}
	}
	return (print_length);
}
