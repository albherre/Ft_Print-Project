/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albherre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:19:52 by albherre          #+#    #+#             */
/*   Updated: 2024/02/20 16:19:53 by albherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i])
	{
		i++;
	}
	str = (char *) malloc((i + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	while (s[j])
	{
		str[j] = s[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}
