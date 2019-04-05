/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 14:16:53 by sgury             #+#    #+#             */
/*   Updated: 2019/04/05 15:45:00 by sgury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	chr;
	size_t			i;

	chr = (unsigned char)c;
	i = ft_strlen(s) + 1;
	while (s[i] != chr && i > 0)
		i--;
	if (s[i] != chr)
		return (0);
	return ((char *)s + i);
}