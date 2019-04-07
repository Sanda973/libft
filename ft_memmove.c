/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 11:24:50 by sgury             #+#    #+#             */
/*   Updated: 2019/04/07 13:08:30 by sgury            ###   ########.fr       */
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
		return (un_dst);
	}
	if (dst > src)
	{
		i = len;
		while (i <= len && i > 0)
		{
			un_dst[i] = un_src[i];
			i--;
		}
	}
	return (un_dst);
}

int		main()
{
	char    *src = "thi\xffs i\xfas \0a g\xde\xadood \0nyan\0cat\0 !\r\n";
	int             size = 33;
	char    dst1[0xF0];
	char    dst2[0xF0];

	printf("real memmove: %s\n", memmove(dst1, src, size));
	printf("my memmove: %s\n", ft_memmove(dst2, src, size));
}
