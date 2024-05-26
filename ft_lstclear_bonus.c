/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarhu <jkarhu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:21:59 by jkarhu            #+#    #+#             */
/*   Updated: 2024/05/07 21:07:07 by jkarhu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*p;
	t_list	*next;

	if (!lst || !del)
		return ;
	if (!lst || !*lst)
		return ;
	p = *lst;
	while (p != NULL)
	{
		next = p->next;
		if (p->content != NULL)
			del(p->content);
		free(p);
		p = next;
	}
	*lst = NULL;
}
