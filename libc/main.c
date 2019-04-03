/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 09:58:25 by sgury             #+#    #+#             */
/*   Updated: 2019/04/03 16:45:52 by sgury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main()
{
	char	str1[255] = "La vie est belle";
	char	str2[255] = "La vie est belle";
	char	str3[255] = "La vie est belle";
	char	str4[255] = "La vie est belle";
	char	str5[255] = "La vie est belle";
	char	str6[255] = "La vie est belle";
	char	dst[155] = "Je test le memcpy";
	char	src[155] = "tralala";
	char	dst2[155] = "Je test le memcpy";
	char	src2[155] = "tralala";
	char    dst3[155] = "Je test le memccpy";
	char    src3[155] = "tralala";
	char    dst4[155] = "Je test le memccpy";
	char    src4[155] = "tralala";

	ft_bzero(str1, 2);
	printf("my bzero: %s\n", str1);
	bzero(str2, 2);
	printf("real bzero: %s\n", str2);
	ft_bzero(str3, 25);
	printf("my bzero: %s\n", str3);
	bzero(str4, 25);
	printf("real bzero: %s\n", str4);
	ft_bzero(str5, 0);
	printf("my bzero: %s\n", str5);
	bzero(str6, 0);
	printf("real bzero: %s\n", str6);
	write(1, "\n", 1);

	printf("My memset: %s\n", ft_memset(str1, '4', 3));
	printf("Real memset: %s\n", memset(str2, '4', 3));
	printf("My memset: %s\n", ft_memset(str3, '$', 25));
	printf("Real memset: %s\n", ft_memset(str4, '$', 25));
	printf("My memset: %s\n", ft_memset(str5, '*', 0));
	printf("Real memset: %s\n", ft_memset(str6, '*', 0));
	write(1, "\n", 1);

	printf("real memcpy: %s\n", memcpy(dst, src, 3));
	printf("my memcpy: %s\n", ft_memcpy(dst2, src2, 3));
	write(1, "\n", 1);

	printf("my memccpy: %s\n", ft_memccpy(dst4, src4, 't', 4));
	printf("real memccpy: %s\n", memccpy(dst3, src3, 't', 4));
	write(1, "\n", 1);
	char	dst5[155] = "test  memmove";
	char	src5[155] = "salut moi c'est memmove!";
	char	dst6[155] = "test  memmove";
	char	src6[155] = "salut moi c'est memmove!";
	printf("my memmove: %s\n", ft_memmove(dst5, src5, 5));
	printf("real memmove: %s\n", memmove(dst6, src6, 5));
	write(1, "\n", 1);
	char	str7[155] = "La vie est belle!";
	char	str8[155] = "La vie est belle!";
	printf("my memchr: %s\n", ft_memchr(str7, 'i', 16));
	printf("real memchr: %s\n", memchr(str8, 'i', 16));
	write(1, "\n", 1);
	char	s1_memcmp[155] = "Salut les gens";
	char	s2_memcmp[155] = "Salut Sandra !";
	printf("my memcmp: %d\n", ft_memcmp(s1_memcmp, s2_memcmp, 14));
	printf("real memcmp: %d\n", memcmp(s1_memcmp, s2_memcmp, 14));
	write(1, "\n", 1);
	char str_com[155] = "La vie est belle.";
	printf("my strlen: %zu\n", ft_strlen(str_com));
	printf("real strlen: %zu\n", strlen(str_com));
	write(1, "\n", 1);
	printf("my strdup: %s\n", ft_strdup(str_com));
	printf("real strdup: %s\n", strdup(str_com));
	write(1, "\n", 1);
	char	dst_ft_strcpy[155] = "Salut";
	char	src_ft_strcpy[155] = "Sandra";
	char	dst_strcpy[155] = "Salut";
	char	src_strcpy[155] = "Sandra";
	printf("my strcpy: %s\n", ft_strcpy(dst_ft_strcpy, src_ft_strcpy));
	printf("real strcpy: %s\n", strcpy(dst_strcpy, src_strcpy));
	return (0);
}
