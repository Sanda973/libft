/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 18:18:28 by sgury             #+#    #+#             */
/*   Updated: 2019/04/10 11:33:26 by sgury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	nbr;
	long	lg_n;

	lg_n = (long)n;
	if (lg_n < 0)
	{
		write(fd, "-", 1);
		if (lg_n == -2147483648)
			write(fd, "2147483648", 11);
		lg_n *= -1;
	}
	if (lg_n < 10)
	{
		nbr = lg_n + '0';
		write(fd, &nbr, 1);
	}
	if (lg_n > 9)
	{
		ft_putnbr_fd(lg_n / 10, fd);
		nbr = lg_n % 10 + '0';
		write(fd, &nbr, 1);
	}
}
