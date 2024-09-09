/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiyari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:34:32 by ktiyari           #+#    #+#             */
/*   Updated: 2023/12/17 02:59:32 by ktiyari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *) str);
		str++;
	}
	if ((char)c == '\0')
		return ((char *) str);
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     return 0;
// }