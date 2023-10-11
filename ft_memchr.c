/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diteixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:09:58 by diteixei          #+#    #+#             */
/*   Updated: 2023/10/11 11:10:22 by diteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*sc;

	i = 0;
	sc = (unsigned char *)s;
	while (n--)
	{
		if (sc[i] == (unsigned char)c)
			return (&sc[i]);
		i++;
	}
	return (NULL);
}
