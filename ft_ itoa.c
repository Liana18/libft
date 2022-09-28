/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stritoa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lter-zak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:35:05 by lter-zak          #+#    #+#             */
/*   Updated: 2022/04/09 19:04:35 by lter-zak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	itoa_dig(long n)
{
	char	k;

	k = 0;
	k = (n % 10) + '0';
	return (k);
}

static int	itoa_len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		++len;
		n = n * (-1);
	}
	while (n != 0)
	{
		n = n / 10;
		++len;
	}
	return (len);
}

static char	*is_zero(char *str)
{
	str[0] = '0';
	str[1] = 0;
	return (str);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*str;
	long	w;

	w = n;
	len = itoa_len(w);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (n == 0)
		return (is_zero(str));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (w < 0)
	{
		str[0] = '-';
		w = w * -1;
	}
	while (w > 0)
	{
		str[--len] = itoa_dig(w);
		w = w / 10;
	}
	return (str);
}
/*  
  int main()
  {
          int a =-1234;
          printf("%s" , ft_itoa(a));
          return (0);
 }
 */
