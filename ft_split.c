/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slatrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:09:14 by slatrech          #+#    #+#             */
/*   Updated: 2024/12/02 16:49:20 by slatrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*freeer(char **nvl, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(nvl[i]);
		i++;
	}
	free(nvl);
	return (NULL);
}

int	increm(char const *s, int i, char c)
{
	while (s[i] == c)
		i++;
	return (i);
}

void	writer(char **nvl, char const *s, int j, int cc)
{
	int	m;
	int	start;

	m = 0;
	start = cc;
	while (m < cc)
	{
		nvl[j][m++] = s[start++];
	}
	nvl[j][m] = '\0';
}

char	**splitter(int dc, char const *s, char c, char **nvl)
{
	int	cc;
	int	i;
	int	j;
	int	y;

	i = 0;
	j = 0;
	while (j < dc)
	{
		cc = 0;
		i = increm(s, i, c);
		y = i;
		while (s[i] != c && s[i])
		{
			i++;
			cc++;
		}
		nvl[j] = malloc(sizeof(char) * (cc + 1));
		if (!nvl[j])
			return (freeer(nvl, j));
		writer(nvl, &s[y - cc], j, cc);
		j++;
	}
	nvl[j] = 0;
	return (nvl);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		dc;
	char	**nvl;

	i = 0;
	dc = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
			i++;
		dc++;
	}
	if (s[i - 1] == c && i > 1)
		dc--;
	i = 0;
	nvl = malloc(sizeof(char *) * (dc + 1));
	if (!nvl)
		return (NULL);
	if (splitter(dc, s, c, nvl) == NULL)
		return (NULL);
	return (nvl);
}
