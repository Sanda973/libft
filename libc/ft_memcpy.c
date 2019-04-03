/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 19:03:23 by sgury             #+#    #+#             */
/*   Updated: 2019/04/03 11:22:59 by sgury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t			i;
	unsigned char	*un_dst;
	unsigned char	*un_src;

	i = 0;
	un_dst = (unsigned char*)dst;
	un_src = (unsigned char*)src;
	while (i < n)
	{
		un_dst[i] = un_src[i];
		i++;
	}
	return (un_dst);
}
