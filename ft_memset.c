/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiyari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 10:44:32 by ktiyari           #+#    #+#             */
/*   Updated: 2023/12/15 22:10:11 by ktiyari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *adr, int v, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)adr;
	while (i < n)
	{
		str[i] = (char)v;
		i++;
	}
	return (str);
}
// #include <stdio.h>
// #include <string.h>
// int main() {

//     return 0;
// }