/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-monc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 11:59:00 by fde-monc          #+#    #+#             */
/*   Updated: 2015/11/25 12:09:52 by fde-monc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int i;
	int s1l;
	int s2l;

	i = 0;
	s1l = ft_strlen(s1);
	s2l = ft_strlen(s2);
	if (s1l == s2l)
	{
		while (s1[i] == s2[i])
			i++;
		if (i - 1 == s1l)
			return (1);
		else
			return (0);
	}
	else
		return (0);
}
