/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-monc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:32:31 by fde-monc          #+#    #+#             */
/*   Updated: 2015/11/30 19:50:21 by fde-monc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	int i;
	int j;
	int n;

	n = len;
	i = 0;
	j = 0;
	if (s2[j] == '\0')
		return ((char *)s1);
	while (s1[i])
	{
		while (s1[i] != s2[j] && i < n)
			i++;
		while (s1[i] == s2[j] && s2[j] != '\0' && i < n)
		{
			i++;
			j++;
		}
		if (s2[j] == '\0')
			return ((char *)&s1[i - j]);
		i = (i - j + 1);
		j = 0;
	}
	return (NULL);
}
