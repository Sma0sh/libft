/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diteixei <diteixei@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:50:28 by diteixei          #+#    #+#             */
/*   Updated: 2023/10/19 12:15:32 by diteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*re;

	re = (t_list *)malloc(sizeof(*re));
	if (!re)
		return (0);
	re->content = content;
	re->next = 0;
	return (re);
}
