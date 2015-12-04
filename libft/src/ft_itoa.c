/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-monc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 15:49:13 by fde-monc          #+#    #+#             */
/*   Updated: 2015/12/01 17:21:38 by fde-monc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_case(int n)
{
	int c;

	c = 0;
	if (n < 0)
	{
		c++;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		c++;
	}
	c++;
	return (c);
}

char		*ft_itoa(int n)
{
	int		c;
	char	*res;
	int		d;

	d = n;
	c = ft_case(n);
	if (n <= 0)
		n = -n;
	res = malloc(sizeof(res) * c);
	res[c - 1] = '\0';
	if (n == 0 || n == -0)
		return (ft_strcpy(res, "0"));
	if (d == -2147483648)
		return (ft_strcpy(res, "-2147483648"));
	while (c + 1 > 0)
	{
		c--;
		res[c - 1] = (n % 10) + 48;
		n = n / 10;
	}
	if (d < 0)
		res[0] = '-';
	return (res);
}
