/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diteixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:44:01 by diteixei          #+#    #+#             */
/*   Updated: 2023/10/11 12:49:53 by diteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*ary;

	ary = (char *)malloc(ft_strlen(s) * sizeof(char) + 1);
	if (!ary)
		return (0);
	i = 0;
	while (s[i])
	{
		ary[i] = s[i];
		i++;
	}
	ary[i] = '\0';
	return (ary);
}
