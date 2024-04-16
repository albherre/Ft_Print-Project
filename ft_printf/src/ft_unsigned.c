/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albherre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:41:56 by albherre          #+#    #+#             */
/*   Updated: 2024/04/13 15:41:59 by albherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*ft_uitoa(unsigned int n)
{
	char	*str;
	int		i;

	i = ft_getlength(n);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	str[i] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	while (n != 0)
	{
		str[i - 1] = (n % 10) + 48;
		n = n / 10;
		i--;
	}
	return (str);
}

int	ft_putunsigned(unsigned int n)
{
	int		print_length;
	char	*num;

	print_length = 0;
	if (n == 0)
		print_length += ft_putchar('0');
	else
	{
		num = ft_uitoa(n);
		print_length += ft_putstr(num);
		free(num);
	}
	return (print_length);
}
