/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiyari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 06:44:29 by ktiyari           #+#    #+#             */
/*   Updated: 2023/12/18 00:20:14 by ktiyari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	slen = ft_strlen(src);
	if ((!dst && size == 0))
		return (slen);
	dlen = ft_strlen(dst);
	if (size <= dlen)
		return (slen + size);
	i = 0;
	while (dlen + i < size - 1 && src[i])
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}
// #include <stdio.h>
// #include <string.h>
// int main(void) {
// 	char destination[20] = "Hello";
//     const char *source = " World";
//     size_t result = strlcat(destination, source, 11);
//     printf("destination = %s\n", destination);
//     printf("returned: %zu\n", result);
//   return 0;
// }