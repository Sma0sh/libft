/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diteixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:35:52 by diteixei          #+#    #+#             */
/*   Updated: 2023/10/10 16:33:02 by diteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	sds;
	size_t	ssc;
	size_t	i;
	char	*rc;

	i = 0;
	ssc = ft_strlen(src);
	sds = ft_strlen(dst);
	rc = (char *)src;
	while (rc[i] && (sds + i + 1) < size)
	{
		dst[sds + i] = rc[i];
		i++;
	}
	dst[sds + i] = '\0';
	if (size > sds)
		return (ssc + sds);
	else
		return (ssc + size);
}
