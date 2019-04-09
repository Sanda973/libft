/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 11:46:09 by sgury             #+#    #+#             */
/*   Updated: 2019/04/08 17:52:13 by sgury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_int_len(int n)
{
	int	i;
	int	len;

	i = 1;
	len = 0;
	if (n == 0 || n == 1)
		return (1);
	while (i < n)
	{
		i *= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		n_len;
	int		neg;

	i = 0;
	neg = 0;
	if (n < 0)
	{
		neg = 1;
		n *= -1;
	}
	n_len = ft_int_len(n);
	if ((str = ft_strnew(n_len + neg)) == NULL)
		return (NULL);
	if (n == -2147483648)
		str = "-2147483648\0";
	while (i < n_len)
	{
		str[i] = n % 10 + '0';
		i++;
		n = n / 10;
	}
	if (neg)
		str[i] = '-';
	str = ft_strrev(str);
	return (str);
}
