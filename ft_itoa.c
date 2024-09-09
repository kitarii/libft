/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiyari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 03:59:17 by ktiyari           #+#    #+#             */
/*   Updated: 2023/12/18 04:52:28 by ktiyari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	integer_len(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*p;
	long	num;

	len = integer_len(n);
	num = n;
	p = malloc(sizeof(char) * len + 1);
	if (!p)
		return (NULL);
	if (num < 0)
	{
		p[0] = '-';
		num *= -1;
	}
	if (num == 0)
		p[0] = '0';
	p[len] = '\0';
	len--;
	while (num)
	{
		p[len] = num % 10 + '0';
		len--;
		num /= 10;
	}
	return (p);
}
// #include <stdio.h>
// int main ()
// {
//   return 0;
// }