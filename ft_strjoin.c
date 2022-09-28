/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lter-zak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 15:16:48 by lter-zak          #+#    #+#             */
/*   Updated: 2022/04/09 19:13:24 by lter-zak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;
	size_t	l;

	i = -1;
	j = -1;
	l = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc((l + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s1[++i])
	{
		str[i] = s1[i];
	}
	while (s2[++j])
	{
		str[i++] = s2[j];
	}
	str[i] = '\0';
	return (str);
}
