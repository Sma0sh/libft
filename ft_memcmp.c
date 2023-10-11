/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diteixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:28:24 by diteixei          #+#    #+#             */
/*   Updated: 2023/10/11 11:55:50 by diteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*su1;
	unsigned char	*su2;

	if (n == 0)
		return (0);
	su1 = (unsigned char *)s1;
	su2 = (unsigned char *)s2;
	i = 0;
	while (su1[i] == su2[i] && i < n - 1)
		i++;
	return ((int)su1[i] - (int)su2[i]);
}
