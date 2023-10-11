/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diteixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:21:43 by diteixei          #+#    #+#             */
/*   Updated: 2023/10/10 12:50:45 by diteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*sc;
	unsigned char		*dt;
	size_t				i;

	if (!src && !dest)
		return (0);
	i = 0;
	sc = (const unsigned char *)src;
	dt = (unsigned char *)dest;
	if (dt > sc)
	{
		while (n-- > 0)
			dt[n] = sc[n];
	}
	else
	{
		while (i < n)
		{
			dt[i] = sc[i];
			i++;
		}
	}
	return (dest);
}
