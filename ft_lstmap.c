/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diteixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:55:19 by diteixei          #+#    #+#             */
/*   Updated: 2023/10/25 11:54:18 by diteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*re;
	t_list	*guar;
	void	*content;

	re = 0;
	while (lst)
	{
		content = (f)(lst->content);
		guar = ft_lstnew(content);
		if (!content || !guar)
		{
			if (content && del)
				del(content);
			if (guar)
				free(guar);
			ft_lstclear(&re, del);
			return (0);
		}
		ft_lstadd_back(&re, guar);
		lst = lst->next;
	}
	return (re);
}
