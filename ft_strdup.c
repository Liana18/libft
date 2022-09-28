/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lter-zak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 19:09:50 by lter-zak          #+#    #+#             */
/*   Updated: 2022/04/09 19:12:37 by lter-zak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s;
	int		l;

	l = ft_strlen(s1) + 1;
	s = (char *)malloc(l * sizeof(char));
	ft_memcpy (s, s1, l);
	return (s);
}
