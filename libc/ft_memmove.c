/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 11:24:50 by sgury             #+#    #+#             */
/*   Updated: 2019/04/03 12:13:02 by sgury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*un_dst;
	unsigned char	*un_src;
	unsigned char	un_tmp[len];
	size_t			i;

	i = 0;
	un_dst = (unsigned char *)dst;
	un_src = (unsigned char *)src;
	while (i < len)
	{
		un_tmp[i] = un_src[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		un_dst[i] = un_tmp[i];
		i++;
	}
	return (un_dst);
}
