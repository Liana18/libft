/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lter-zak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 15:29:28 by lter-zak          #+#    #+#             */
/*   Updated: 2022/04/09 19:10:34 by lter-zak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t size)
{
	char	*p;

	p = (char *)str;
	if (size == 0)
		return (str);
	while (size > 0)
	{
		*(p++) = c;
		--size;
	}
	return (str);
}
