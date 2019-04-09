/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 13:10:17 by sgury             #+#    #+#             */
/*   Updated: 2019/04/08 15:18:19 by sgury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*alloc;
	size_t			i;

	i = 0;
	if ((alloc = (unsigned char *)malloc(sizeof(char) * (size))) == NULL)
		return (NULL);
	while (i < size)
		alloc[i++] = 0;
	return (alloc);
}
