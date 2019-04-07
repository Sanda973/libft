/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 15:24:10 by sgury             #+#    #+#             */
/*   Updated: 2019/04/07 16:15:19 by sgury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;

	if((str = ft_memalloc(ft_strlen(s) + 1)) == NULL)
		return (NULL);
	while (*s != '\0')
	{
		*str = (f(s));
		str++;
		s++;
	}
	return (str);
}
