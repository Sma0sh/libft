/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diteixei <diteixei@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:07:02 by diteixei          #+#    #+#             */
/*   Updated: 2023/10/19 16:34:58 by diteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*re;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		re = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = re;
	}
	*lst = 0;
}
