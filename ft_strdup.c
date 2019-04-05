/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 15:03:20 by sgury             #+#    #+#             */
/*   Updated: 2019/04/03 15:28:27 by sgury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*un_dup;
	size_t	len;

	len = 0;
	while (s1[len] != '\0')
		len++;
	if ((un_dup = (char *)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	len = 0;
	while (s1[len] != '\0')
	{
		un_dup[len] = s1[len];
		len++;
	}
	un_dup[len] = '\0';
	return (un_dup);
}
