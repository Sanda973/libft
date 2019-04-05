/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 13:42:15 by sgury             #+#    #+#             */
/*   Updated: 2019/04/05 15:39:16 by sgury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	chr;
	size_t			i;

	chr = (unsigned char)c;
	i = 0;
	while (s[i] != chr && s[i] != '\0')
		i++;
	if (s[i] != chr)
		return (0);
	return ((char *)s + i);
}
