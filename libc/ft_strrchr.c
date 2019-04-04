/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 14:16:53 by sgury             #+#    #+#             */
/*   Updated: 2019/04/04 14:45:13 by sgury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	chr;
	char			*occ;
	size_t			i;
	size_t			j;

	chr = (unsigned char)c;
	occ = (char *)s;
	i = ft_strlen(s) + 1;
	j = 0;
	while (s[i] != chr && i > 0)
		i--;
	if (s[i] != chr)
		return (0);
	while (s[i] != '\0')
		occ[j++] = s[i++];
	occ[j] = '\0';
	return (occ);
}
