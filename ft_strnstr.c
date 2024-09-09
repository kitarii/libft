/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiyari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 05:30:56 by ktiyari           #+#    #+#             */
/*   Updated: 2023/12/15 03:29:05 by ktiyari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)haystack;
	if (*needle == '\0')
		return (str);
	if (len == 0)
		return (NULL);
	i = 0;
	while (str[i] && i < len)
	{
		j = 0;
		while (needle[j] && str[i + j]
			&& str[i + j] == needle[j] && (i + j) < len)
			j++;
		if (needle[j] == '\0')
			return (str + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main(void) {

}
*/
