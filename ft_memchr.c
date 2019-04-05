/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 13:22:43 by sgury             #+#    #+#             */
/*   Updated: 2019/04/05 17:47:40 by sgury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*un_s;
	unsigned char	un_c;
	size_t			i;

	i = 0;
	un_s = (unsigned char *)s;
	un_c = (unsigned char)c;
	while (i < n && un_s[i] != '\0')
	{
		if (un_s[i] == un_c)
			return ((char *)un_s + i);
		i++;
	}
	if (un_s[i] == '\0' && un_c == '\0')
		return ((char *)un_s + i);
	return (0);
}
