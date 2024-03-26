/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albherre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:24:54 by albherre          #+#    #+#             */
/*   Updated: 2024/03/08 16:24:56 by albherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char	*p1;
	const char	*p2;

	if (*needle == '\0')
	{
		return ((char *)haystack);
	}
	while (*haystack != '\0')
	{
		p1 = haystack;
		p2 = needle;
		while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2)
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
		{
			return ((char *)haystack);
		}
		haystack++;
	}
	return (NULL);
}
