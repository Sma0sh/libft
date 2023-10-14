/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diteixei <diteixei@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 13:01:48 by diteixei          #+#    #+#             */
/*   Updated: 2023/10/14 16:25:22 by diteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*re;
	size_t	sslen;
	size_t	i;

	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	sslen = ft_strlen(s + start);
	if (sslen < len)
		len = sslen;
	re = (char *)malloc(sizeof(char) * (len + 1));
	if (!re)
		return (0);
	i = 0;
	while (i < len)
	{
		re[i] = s[start + i];
		i++; 
	}
	re[i] = '\0';
	return (re);
}
