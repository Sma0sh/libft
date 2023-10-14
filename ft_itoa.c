/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diteixei <diteixei@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 19:19:40 by diteixei          #+#    #+#             */
/*   Updated: 2023/10/14 20:03:04 by diteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_maxmin(int n);
static int	ft_count(int n);

char	*ft_itoa(int n)
{
	char	*re;
	size_t	relen;

	if (n == -2147483648)
		return (ft_maxmin(n));
	else
	{
		re = (char *)malloc(sizeof(char) * ft_count(n));
		relen = ft_strlen(re) - 1;
		if (n < 0)
		{
			n = -n;
			re[0] = '-';
		}
		if (n > 9)
		{
			ft_itoa(n / 10);
			n = n % 10;
		}
		if (n <= 9)
		{
			re[relen] = n - '0';
			relen--;
		}
	}
	return (re);
}

static int	ft_count(int n)
{
	int	count;

	count = 0;
	while (n > 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

static char	*ft_maxmin(int n)
{
	char	*re;

	(void)n;
	re = (char *)malloc(sizeof(char) * 11);
	re[0] = '-';
	re[1] = '2';
	re[2] = '1';
	re[3] = '4';
	re[4] = '7';
	re[5] = '4';
	re[6] = '8';
	re[7] = '3';
	re[8] = '6';
	re[9] = '4';
	re[10] = '8';
	re[11] = '\0';
	return (re);
}
