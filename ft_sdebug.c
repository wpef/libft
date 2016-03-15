/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sdebug.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-monc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/06 15:09:54 by fde-monc          #+#    #+#             */
/*   Updated: 2016/03/15 16:18:50 by fde-monc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	ft_sdebug(char *str, char *s)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != '%')
			ft_putchar(str[i]);
		if (str[i] == '%')
		{
			while (s[j])
			{
				ft_putchar(s[j]);
				j++;
			}
		}
		i++;
	}
	ft_putchar('\n');
}

int main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_sdebug("Ceci est % test", av[1]);
	}
	return (0);
}
