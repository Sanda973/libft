/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 17:40:58 by sgury             #+#    #+#             */
/*   Updated: 2019/04/07 18:58:04 by sgury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	size_t	s_ln;
	size_t	f_sp;
	size_t	b_sp;
	size_t	i;

	s_ln = ft_strlen(s) - 1;
	f_sp = 0;
	b_sp = 0;
	str = NULL;
	i = 0;
	while ((s[f_sp] == ' ' || s[f_sp] == '\n' || s[f_sp] == '\t') && s[f_sp])
		f_sp++;
	while ((s[s_ln] == ' ' || s[s_ln] == '\n' || s[s_ln] == '\t') && s_ln > 0)
	{
		b_sp++;
		s_ln--;
	}
	if ((str = ft_strnew(s_ln - f_sp - b_sp)) == NULL)
		return (NULL);
	while (f_sp < ft_strlen(s) - b_sp)
		str[i++] = s[f_sp++];
	return (str);
}
