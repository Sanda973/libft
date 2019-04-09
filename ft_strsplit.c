/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 09:48:50 by sgury             #+#    #+#             */
/*   Updated: 2019/04/08 17:36:56 by sgury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_word_count(char const *s, char c)
{
	size_t	wrd_count;

	wrd_count = 0;
	if (s == NULL)
		return (0);
	while (*s != '\0')
	{
		while (*s == c && *s != '\0')
			s++;
		if (*s != c && *s != '\0')
			wrd_count++;
		while (*s != c && *s != '\0')
			s++;
	}
	return (wrd_count);
}

size_t	ft_wrd_len(char const *s, size_t index, char c)
{
	size_t	len;

	len = 0;
	while (s[index] != c && s[index] != '\0')
	{
		len++;
		index++;
	}
	return (len);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	index;
	size_t	wrd_count;
	size_t	wrd_len;

	i = 0;
	index = 0;
	wrd_count = ft_word_count(s, c);
	wrd_len = 0;
	if ((tab = (char **)malloc(sizeof(char *) * (wrd_count + 1))) == NULL)
		return (NULL);
	while (i < wrd_count)
	{
		while (s[index] == c && s[index] != '\0')
			index++;
		wrd_len = ft_wrd_len(s, index, c);
		if ((tab[i] = ft_strsub(s, index, wrd_len)) == NULL)
			return (NULL);
		i++;
		index = index + wrd_len;
	}
	tab[i] = 0;
	return (tab);
}
