/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiyari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 22:25:19 by ktiyari           #+#    #+#             */
/*   Updated: 2023/12/03 23:37:08 by ktiyari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t elm_nb, size_t size)
{
	void	*p;

	if (elm_nb != 0 && size > SIZE_MAX / elm_nb)
		return (NULL);
	if (!elm_nb && !size)
	{
		p = malloc (1);
		ft_bzero(p, 1);
		return (p);
	}
	p = malloc(elm_nb * size);
	if (!p)
		return (NULL);
	ft_bzero(p, (elm_nb * size));
	return (p);
}
// #include <stdio.h>
// int main() {
//   
// }