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

#include "ft_printf.h"
#include <stdarg.h>

int	init_data(t_data *data, const char *format)
{
	data->chars_written = 0;
	data->s = format;
	data->buff = malloc(Buff_SIZE *sizeof(char));
	if (NULL == data->buff)
}

int	ft_printf(const char *format, ...)
{
	t_data	data;

	//start variadic functions
	va_start(data.arg_ptr, format);
	if (init_data(&data, format))
		return -1;
	while (*)
	{
		/* code */
	}
}
