/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albherre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:22:23 by albherre          #+#    #+#             */
/*   Updated: 2024/02/20 16:22:24 by albherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*s;
	const char	*ptr;

	ptr = NULL;
	s = str;
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			ptr = s;
		}
		s++;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return ((char *)ptr);
}
