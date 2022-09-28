/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lter-zak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 18:45:42 by lter-zak          #+#    #+#             */
/*   Updated: 2022/04/13 12:19:48 by lter-zak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*k;

	if (count == SIZE_MAX || size == SIZE_MAX || size * count == SIZE_MAX)
		return (NULL);
	k = malloc(count * size);
	if (k == NULL)
		return (NULL);
	ft_bzero(k, count * size);
	return (k);
}
