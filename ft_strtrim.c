/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diteixei <diteixei@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:06:23 by diteixei          #+#    #+#             */
/*   Updated: 2023/10/14 16:50:41 by diteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char i, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*re;	
	size_t	i;

	i = 0;
	start = 0;
	while (s1[start] && ft_check(s1[start], set) == 1)
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_check(s1[end - 1], set) == 1)
		end--;
	re = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!re)
		return (0);
	while (start < end)
		re[i++] = s1[start++];
	re[i] = '\0';
	return (re);
}

static int	ft_check(char i, char const *set)
{
	int	j;

	j = 0;
	while (set[j])
	{
		if (i == set[j])
			return (1);
		j++;
	}
	return (0);
}
