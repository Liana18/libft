/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lter-zak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 19:21:44 by lter-zak          #+#    #+#             */
/*   Updated: 2022/04/09 21:27:35 by lter-zak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *dst, const char *src, unsigned int n)
{
	int				len;
	int				i;
	unsigned char	*str1;
	unsigned char	*str2;

	len = 0;
	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	while (n)
	{
		if (str1[len] == str2[len])
		{
			len++;
			i = 0;
		}
		else if (str1[len] > str2[len])
			return (1);
		else
			return (-1);
		n--;
	}
	return (i);
}
