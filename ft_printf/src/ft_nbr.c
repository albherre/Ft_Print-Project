/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albherre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 08:02:00 by albherre          #+#    #+#             */
/*   Updated: 2024/04/16 08:02:02 by albherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		length;
	long	num;

	num = n;
	length = ft_getlength(n);
	if (n < 0)
	{
		num = -num;
	}
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (!str)
	{
		return (0);
	}
	str[length] = '\0';
	while (length > 0)
	{
		length--;
		str[length] = (num % 10) + '0';
		num = num / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

int	ft_putnbr(int n)
{
	char	*num;
	int		length;

	length = 0;
	num = ft_itoa(n);
	length = ft_putstr(num);
	free(num);
	return (length);
}
