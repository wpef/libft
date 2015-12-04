/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-monc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 19:54:58 by fde-monc          #+#    #+#             */
/*   Updated: 2015/12/05 00:19:38 by fde-monc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	isblank (const char s, size_t i)
{
	if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		return (1);
	else
		return (0);
}

char	*ft_strtrim (char const *s)
{
	size_t start;
	size_t len;
	char *res;
	
	start = 0;
	len = 0;
	while (isblank(s, start) == 1)
		start++;
	while(isblank s[start + len] == 0)
		len++;
	res = ft_strsub(s, start, len);
}

