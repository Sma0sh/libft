/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diteixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:19:42 by diteixei          #+#    #+#             */
/*   Updated: 2023/10/10 11:45:47 by diteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_neg(const char *sr);

int	ft_atoi(const char *s)
{
	int	i;
	int	neg;
	int	j;

	i = 0;
	j = 0;
	neg = ft_neg(s);
	while (s[i] != '\0')
	{
		while (s[i] == 32 || s[i] == 9 || s[i] == 10 || s[i] == 11 || 
			s[i] == 12 || s[i] == 13)
			i++;
		while (s[i] == '+' || s[i] == '-')
			i++;
		if (s[i] <= 47 || s[i] >= 58)
			return (0);
		while (s[i] >= 48 && s[i] <= 57)
		{
			j = j * 10 + (s[i] - 48);
			i++;
		}
		break ;
	}
	return (j * neg);
}

static int	ft_neg(const char *sr)
{
	int	i;
	int	a;
	int	b;

	i = 0;
	a = 0;
	b = 0;
	while (sr[i] != '\0')
	{
		if (sr[i] == '-')
			a++;
		if (sr[i] == '+')
			b++;
		if (sr[i] >= '0' && sr[i] <= '9')
		{
			if (a + b > 1)
				return (0);
			if (a == 1)
				return (-1);
			else
				return (1);
		}
		i++;
	}
	return (0);
}
