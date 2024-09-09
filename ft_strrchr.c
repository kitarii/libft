/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiyari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:54:16 by ktiyari           #+#    #+#             */
/*   Updated: 2023/12/17 03:00:05 by ktiyari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *) str + i);
		i--;
	}
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	return 0;
// }