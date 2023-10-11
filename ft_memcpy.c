/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diteixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:49:47 by diteixei          #+#    #+#             */
/*   Updated: 2023/10/10 12:01:26 by diteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*sc;
	unsigned char		*dt;

	if (!src && !dest)
		return (0);
	sc = (const unsigned char *)src;
	dt = (unsigned char *)dest;
	while (n-- > 0)
		*dt++ = *sc++;
	return (dest);
}
