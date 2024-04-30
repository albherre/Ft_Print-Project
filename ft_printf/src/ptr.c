/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albherre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 07:37:28 by albherre          #+#    #+#             */
/*   Updated: 2024/04/16 07:37:31 by albherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_ptrlength(uintptr_t num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_printptr(uintptr_t num)
{
	if (num >= 16)
	{
		ft_printptr(num / 16);
		ft_printptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar(num + '0');
		else
			ft_putchar(num - 10 + 'a');
	}
}

int	ft_putptr(unsigned long long ptr)
{
	int	print_length;

	print_length = 0;
	if (ptr == 0)
		print_length += ft_putstr("(nil)");
	else
	{
		print_length += ft_putstr("0x");
		ft_printptr(ptr);
		print_length += ft_ptrlength(ptr);
	}
	return (print_length);
}
