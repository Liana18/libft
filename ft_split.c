/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lter-zak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:26:10 by lter-zak          #+#    #+#             */
/*   Updated: 2022/04/09 21:35:05 by lter-zak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	del_start_from(const char *str, char del)
{
	size_t	i;

	i = 0;
	while (str[i] != del && str[i])
		++i;
	return (i);
}

static size_t	word_counter(const char *str, char del)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == del)
			++i;
		i += del_start_from(str + i, del);
		if (str[i - 1] != del)
			j++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	j;
	size_t	i;
	size_t	k;
	size_t	w;

	j = 0;
	i = 0;
	k = 0;
	w = word_counter(s, c);
	split = malloc(sizeof(char *) * (w + 1));
	if (!split)
		return (NULL);
	while (k < w)
	{
		while (s[i] == c)
			i++;
		j = del_start_from(s + i, c);
		split[k] = ft_substr(s, i, j);
		k++;
		i += j;
	}
	split[w] = NULL;
	return (split);
}
