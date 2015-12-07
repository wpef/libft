/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ismoreblank.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-monc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 17:50:31 by fde-monc          #+#    #+#             */
/*   Updated: 2015/11/28 17:52:36 by fde-monc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ismoreblank(int c)
{
	if (ft_isblank(c) || c == '\n' || c == '\v' || c == '\r' || c == '\f')
		return (1);
	return (0);
}
