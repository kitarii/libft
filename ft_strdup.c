/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiyari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:51:41 by ktiyari           #+#    #+#             */
/*   Updated: 2023/12/17 02:09:54 by ktiyari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	len;
	char	*p;

	len = ft_strlen((char *)s1);
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
// #include <stdio.h>
// int main() {

//     return 0;
// }