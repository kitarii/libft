/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiyari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:34:23 by ktiyari           #+#    #+#             */
/*   Updated: 2023/12/18 02:24:20 by ktiyari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*p;

	if (!s)
		return (NULL);
	i = 0;
	j = ft_strlen(s);
	while (i + start < j && i < len)
		i++;
	p = malloc(i + 1);
	if (p == NULL)
		return (NULL);
	j = 0;
	while (i > 0)
	{
		p[j] = s[start];
		j++;
		start++;
		i--;
	}
	p[j] = '\0';
	return (p);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {

//    return (0);
// }
