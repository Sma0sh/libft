/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diteixei <diteixei@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:00:22 by diteixei          #+#    #+#             */
/*   Updated: 2023/10/16 15:11:01 by diteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*re;

	if (!s)
		return (0);
	i = 0;
	re = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!re)
		return (0);
	while (s[i] != '\0')
	{
		re[i] = f(i, s[i]);
		i++;
	}
	re[i] = '\0';
	return (re);
}
