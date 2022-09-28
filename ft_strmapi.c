/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lter-zak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:23:53 by lter-zak          #+#    #+#             */
/*   Updated: 2022/04/09 19:15:26 by lter-zak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*mem;

	if (!s || !f)
		return (NULL);
	mem = malloc(ft_strlen(s) + 1);
	if (!mem)
		return (NULL);
	i = 0;
	while (s[i])
	{
		mem[i] = f(i, s[i]);
		++i;
	}
	mem[i] = '\0';
	return (mem);
}
