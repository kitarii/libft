/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiyari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:22:46 by ktiyari           #+#    #+#             */
/*   Updated: 2023/12/17 01:08:32 by ktiyari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	if (fd >= 0)
	{
		nb = (long)n;
		if (nb < 0)
		{
			write(fd, "-", 1);
			nb = -nb;
		}
		if (nb > 9)
		{
			ft_putnbr_fd(nb / 10, fd);
			nb = nb % 10;
		}
		if (nb < 10)
		{
			nb += 48;
			write(fd, &nb, 1);
		}
	}
}
// #include <stdio.h>
// #include <fcntl.h>
// int main() {
//   return 0;
// }
