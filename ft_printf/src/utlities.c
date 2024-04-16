/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utlities.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albherre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 21:50:33 by albherre          #+#    #+#             */
/*   Updated: 2024/04/12 21:50:41 by albherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_getlength(long num)
{
	int	length;

	length = 0;
	if (num == 0)
	{
		return (1);
	}
	if (num < 0)
	{
		length = 1;
	}
	while (num != 0)
	{
		length++;
		num = num / 10;
	}
	return (length);
}
