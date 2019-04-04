/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 13:42:15 by sgury             #+#    #+#             */
/*   Updated: 2019/04/04 14:15:53 by sgury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	chr;
	char			*occ;
	size_t			i;
	size_t			j;

	chr = (unsigned char)c;
	occ = (char *)s;
	i = 0;
	j = 0;
	while (s[i] != chr && s[i] != '\0')
		i++;
	if (s[i] != chr)
		return (0);
	while (s[i] != '\0')
		occ[j++] = s[i++];
	occ[j] = '\0';
	return (occ);
}
