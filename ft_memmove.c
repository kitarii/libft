/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiyari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 21:42:01 by ktiyari           #+#    #+#             */
/*   Updated: 2023/12/03 22:25:03 by ktiyari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (!d && !s)
		return (NULL);
	if (d <= s)
		ft_memcpy(d, s, n);
	else
	{
		while (i < n)
		{
			d[n - i - 1] = s[n - i - 1];
			i++;
		}
	}
	return (dst);
}
// #include <stdio.h>
// #include <string.h>
// int main ()
// {
//   
// }