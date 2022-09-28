/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lter-zak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 21:59:35 by lter-zak          #+#    #+#             */
/*   Updated: 2022/04/09 19:10:25 by lter-zak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *str, size_t l)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)str;
	if (dst > str)
	{
		while (l--)
		{
			*(d + l) = *(s + l);
		}
	}
	else if (str > dst)
	{
		while (l--)
			*(d++) = *(s++);
	}
	return (dst);
}
