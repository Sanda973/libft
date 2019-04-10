/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 11:24:50 by sgury             #+#    #+#             */
/*   Updated: 2019/04/10 08:40:55 by sgury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*un_dst;
	unsigned char	*un_src;
	size_t			i;

	un_dst = (unsigned char *)dst;
	un_src = (unsigned char *)src;
	i = 0;
	if (dst <= src)
	{
		while (i < len)
		{
			un_dst[i] = un_src[i];
			i++;
		}
	}
	if (dst > src)
	{
		i = len;
		while (i > 0)
		{
			un_dst[i - 1] = un_src[i - 1];
			i--;
		}
	}
	return (un_dst);
}
