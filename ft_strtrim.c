/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiyari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:47:19 by ktiyari           #+#    #+#             */
/*   Updated: 2023/12/15 03:53:11 by ktiyari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*p;

	p = NULL;
	if (s1 != NULL && set != NULL)
	{
		i = 0;
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		j = ft_strlen((char *)s1);
		while (j > i && ft_strchr(set, s1[j - 1]))
			j--;
		if (j >= i)
		{
			p = (char *)malloc(sizeof(char) * (j - i + 1));
			if (p != NULL)
			{
				len = j - i;
				ft_strlcpy(p, s1 + i, len + 1);
			}
		}
	}
	return (p);
}
// #include <stdio.h>
// int main(void) {
//   return 0;
// }