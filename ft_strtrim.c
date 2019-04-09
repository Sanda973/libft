/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 17:40:58 by sgury             #+#    #+#             */
/*   Updated: 2019/04/09 14:41:53 by sgury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		s_ln;
	int		f_sp;
	int		b_sp;
	int		i;

	s_ln = ft_strlen(s);
	f_sp = 0;
	b_sp = 0;
	str = NULL;
	i = 0;
	if (s == NULL)
		return (NULL);
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i] != '\0')
		i++;
	f_sp = i;
	i = s_ln - 1;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && i > 0)
	{
		b_sp++;
		i--;
	}
	i = 0;
	if ((str = ft_strnew(s_ln - f_sp - b_sp)) == NULL)
		return (NULL);
	s_ln = s_ln - f_sp - b_sp;
//	printf("front spaces = %d\n", f_sp);
//	printf("back spaces = %d\n", b_sp);
//	printf("len new str = %d\n", s_ln);
	while (i < s_ln)
		str[i++] = s[f_sp++];
	return (str);
}

/*
int		main(int ac, char **av)
{
	char	*str;
	if (ac != 2)
		return (0);
	str = av[1];
	printf("trimed str: %s\n", ft_strtrim(str));
}
*/
