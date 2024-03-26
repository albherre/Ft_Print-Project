/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albherre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:21:38 by albherre          #+#    #+#             */
/*   Updated: 2024/02/20 16:21:40 by albherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	if (big == NULL && len == 0)
	{
		return (NULL);
	}
	if (little[0] == '\0')
	{
		return ((char *)big);
	}
	little_len = ft_strlen(little);
	i = 0;
	while (big[i] != '\0' && i + little_len <= len)
	{
		if (big[i] == little[0])
		{
			if (ft_strncmp(&big[i], little, little_len) == 0)
			{
				return ((char *)&big[i]);
			}
		}
		i++;
	}
	return (NULL);
}
