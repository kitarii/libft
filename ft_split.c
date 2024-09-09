/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiyari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 14:00:34 by ktiyari           #+#    #+#             */
/*   Updated: 2023/12/15 03:41:12 by ktiyari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*fill_words(char *p, char const *s,
		unsigned int i, unsigned int len_word)
{
	int	j;

	j = 0;
	while (len_word > 0)
	{
		p[j] = s[i - len_word];
		j++;
		len_word--;
	}
	p[j] = '\0';
	return (p);
}

static char	**ft_free(char **p, unsigned int word)
{
	while (word > 0)
	{
		word--;
		free(p[word]);
	}
	free(p);
	return (NULL);
}

static char	**divide_str(char const *s, char **p, unsigned int cw, char c)
{
	unsigned int	word;
	unsigned int	len_word;
	unsigned int	i;

	word = 0;
	i = 0;
	len_word = 0;
	while (word < cw)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			len_word++;
			i++;
		}
		p[word] = malloc(len_word + 1);
		if (!p[word])
			return (ft_free(p, word));
		fill_words(p[word], s, i, len_word);
		len_word = 0;
		word++;
	}
	p[word] = NULL;
	return (p);
}

static unsigned int	count_word(char const *s, char c)
{
	int	i;
	int	cp;

	i = 0;
	cp = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			cp++;
		while (s[i] != c && s[i])
			i++;
	}
	return (cp);
}

char	**ft_split(char const *s, char c)
{
	int		cw;
	char	**p;

	if (!s)
		return (NULL);
	cw = count_word(s, c);
	p = malloc(sizeof(p) * (cw + 1));
	if (!p)
		return (NULL);
	p = divide_str(s, p, cw, c);
	return (p);
}
// #include <stdio.h>
// int main() {
// 
//     return 0;
// }