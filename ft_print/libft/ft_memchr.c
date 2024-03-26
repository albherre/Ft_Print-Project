/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albherre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:17:17 by albherre          #+#    #+#             */
/*   Updated: 2024/03/08 03:49:43 by albherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*ptr;

	ptr = (const unsigned char *)str;
	while (n--)
	{
		if (*ptr == (unsigned char)c)
		{
			return ((void *)ptr);
		}
		ptr++;
	}
	return (NULL);
}
