/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lter-zak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 20:20:13 by lter-zak          #+#    #+#             */
/*   Updated: 2022/04/09 19:14:22 by lter-zak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	dl;
	size_t	sl;
	size_t	i;
	size_t	m;

	dl = ft_strlen(dest);
	sl = ft_strlen(src);
	m = 0;
	i = 0;
	if (n > dl)
		m = dl + sl;
	else
		m = sl + n;
	while (src[i] && dl + i + 1 < n)
	{
		dest[i + dl] = src[i];
		i++;
	}
		dest[i + dl] = 0;
	return (m);
}
