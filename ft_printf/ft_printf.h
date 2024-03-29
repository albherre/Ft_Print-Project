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

#ifndef ft_printf
# define ft_printf

# include "libft/libft.h" // libft library of functions
# include <stdlib.h> //malloc free
# include <unistd.h> // write
# include <stdarg.h> // variadic functions
# include <stdbool.h> // false true
# include <limits.h> // INT_MAX

// Buffer of buffer_size, 4096 bytes
#define Buff_SIZE	(1<<12)

/*
struct bool format
[+-' '0#][width][.precision]
*/
typedef	struct s_format
{
    /* flags */
    bool	left_justified;
    bool	plus;
    bool	space;
    bool	hash;
    bool	zero_pad;

    // "cspdiuxX%"
    char	specifier;
    // width + precision
    int	width_value;
	int	precision_value;
}   t_format;

typedef struct s_data
{
	// pointer copy to format
	const char	*s;
	// va_list -> va_arg(arg_ptr, int);
	va_list	arg_ptr;
	// chars written
	int	chars_written;
	// [buffer] buffer_size
	char	*buff;
	int	buffer_index;

	t_format	format;
}	t_data;

#endif