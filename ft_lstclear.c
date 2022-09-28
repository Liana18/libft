/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lter-zak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 14:51:30 by lter-zak          #+#    #+#             */
/*   Updated: 2022/04/09 22:14:51 by lter-zak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*smt;

	if (!*lst || !lst || !del)
		return ;
	while (*lst && lst)
	{
		smt = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = smt;
	}
}
