/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-monc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 16:59:31 by fde-monc          #+#    #+#             */
/*   Updated: 2015/11/30 15:58:58 by fde-monc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *ptr_dst;
	const char *ptr_src;
	unsigned char cc;
	size_t i;

	ptr_dst = (char *)dst;
	ptr_src = (char *)src;
	cc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		ptr_dst[i] = ptr_src[i];
		if (ptr_src[i] == cc)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
