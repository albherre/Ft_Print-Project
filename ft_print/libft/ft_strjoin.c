/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albherre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:47:03 by albherre          #+#    #+#             */
/*   Updated: 2024/03/12 17:15:31 by albherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	str_copy(char *dest, const char *src, size_t *index)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dest[*index] = src[i];
		(*index)++;
		i++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len_s1;
	size_t	len_s2;
	size_t	index;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!str)
		return (NULL);
	index = 0;
	str_copy(str, s1, &index);
	str_copy(str, s2, &index);
	str[index] = '\0';
	return (str);
}
