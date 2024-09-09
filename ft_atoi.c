/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiyari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:41:11 by ktiyari           #+#    #+#             */
/*   Updated: 2023/12/22 14:09:14 by ktiyari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	rst;

	i = 0;
	sign = 1;
	rst = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= 48 && str[i] <= 57)
	{
		rst *= 10;
		rst += str[i] - '0';
		i++;
	}
	return (rst * sign);
}
// #include <stdio.h>
// #include <string.h>
// int main() {
//     const char *str = "";
// 	   printf("%d\n", ft_atoi(str));

//     return 0;
// }
