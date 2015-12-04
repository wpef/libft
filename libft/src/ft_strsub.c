/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-monc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 18:18:37 by fde-monc          #+#    #+#             */
/*   Updated: 2015/12/04 18:56:57 by fde-monc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char	*s1;

	i = 0;
	if (!s)
		return (NULL);
	s1 = ft_strnew(len);
	while (i < len)
	{
		s1[i] = s[start];
		start++;
		i++;
	}
	return (s1);
}

