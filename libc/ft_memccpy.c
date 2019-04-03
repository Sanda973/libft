/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 10:15:46 by sgury             #+#    #+#             */
/*   Updated: 2019/04/03 11:20:08 by sgury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst,
		const void *restrict src, int c, size_t n)
{
	unsigned char	*un_dst;
	unsigned char	*un_src;
	unsigned char	un_c;
	size_t			i;
	size_t			j;

	i = 0;
	j = 0;
	un_dst = (unsigned char *)dst;
	un_src = (unsigned char *)src;
	un_c = (unsigned char)c;
	while (i < n)
	{
		if (un_src[i] == un_c)
		{
			i++;
			while (un_dst[j] != '\0')
				un_dst[j++] = un_dst[i++];
			return (un_dst);
		}
		un_dst[i] = un_src[i];
		i++;
	}
	return (0);
}
