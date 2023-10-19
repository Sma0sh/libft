/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diteixei <diteixei@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 19:19:40 by diteixei          #+#    #+#             */
/*   Updated: 2023/10/16 12:11:36 by diteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n);
static char	ft_divnumbers(int n);
static char	*ft_itoamak(size_t relen, size_t i, int n);

char	*ft_itoa(int n)
{
	size_t	relen;
	size_t	i;

	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0 || n == -0)
		return (ft_strdup("0"));
	relen = 0;
	return (ft_itoamak(relen, i, n));
}

static int	ft_count(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

static char	ft_divnumbers(int n)
{
	char	re;

	re = (n % 10) + '0';
	return (re);
}

static char	*ft_itoamak(size_t relen, size_t i, int n)
{
	char	*re;

	if (n < 0)
	{
		relen += 1;
		n = -n;
		i = 1;
	}
	relen += ft_count(n);
	re = (char *)malloc(sizeof(char) * relen + 1);
	if (!re)
		return (0);
	re[relen] = '\0';
	if (i == 1)
		re[0] = '-';
	while (n > 0)
	{
		re[--relen] = ft_divnumbers(n);
		n = n / 10;
	}
	return (re);
}
