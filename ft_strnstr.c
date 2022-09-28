/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lter-zak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 20:06:46 by lter-zak          #+#    #+#             */
/*   Updated: 2022/04/09 19:16:00 by lter-zak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char*big, const char*little, size_t len)
{
	unsigned int	k;
	unsigned int	i;
	unsigned int	j;
	char			*b;
	char			*l;

	i = 0;
	b = (char *)big;
	l = (char *) little;
	k = ft_strlen(l);
	if (b == l || *little == '\0')
		return (b);
	while (b[i] != 0 && i < len)
	{
		j = 0;
		while (b[i + j] != 0 && l[j] != 0
			&& b[i + j] == l[j] && i + j < len)
			j++;
		if (j == k)
			return (b + i);
		i++;
	}
	return (NULL);
}
