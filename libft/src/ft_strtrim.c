/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-monc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 19:54:58 by fde-monc          #+#    #+#             */
/*   Updated: 2015/12/04 20:40:51 by fde-monc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	isblank (const char s, size_t i)
{
	if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		return (0);
	else
		return (1);
}

char	*ft_strtrim (char const *s)
{
	while (isblank(s, i) == 0)
		i++;

}
