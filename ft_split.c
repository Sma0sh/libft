/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diteixei <diteixei@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:51:48 by diteixei          #+#    #+#             */
/*   Updated: 2023/10/19 10:35:04 by diteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char const *s, char c);
static char	**ft_free(char **tab, int k);
static int	ft_reti(int i, const char *s, char c);
static int	ft_retj(int i, const char *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	tab = malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!tab)
		return (0);
	while (s[i])
	{
		j = ft_retj(i, s, c);
		i = ft_reti(i, s, c);
		if (i > j)
		{
			tab[k] = malloc(sizeof(char) * (i - j + 1));
			if (!tab[k])
				return (ft_free(tab, k));
			ft_strlcpy(tab[k], &s[j], i - j + 1);
			k++;
		}
	}
	tab[k] = NULL;
	return (tab);
}

static int	ft_wordcount(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c)
			words++;
		while (s[i] != c && s[i + 1])
			i++;
		i++;
	}
	return (words);
}

static char	**ft_free(char **tab, int k)
{
	while (k != 0)
	{
		free(tab[k]);
		k++;
	}
	free(tab);
	return (0);
}

static int	ft_reti(int i, const char *s, char c)
{
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static int	ft_retj(int i, const char *s, char c)
{
	while (s[i] == c)
		i++;
	return (i);
}
