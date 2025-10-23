/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slatrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:46:52 by slatrech          #+#    #+#             */
/*   Updated: 2024/12/02 14:59:01 by slatrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	isset(char const *s, char const *st, int k)
{
	int	j;

	j = 0;
	while (st[j])
	{
		if (s[k] == st[j])
		{
			return (1);
		}
		j++;
	}
	return (0);
}

char	*malloceur(const char *s1, unsigned long slen, int elen)
{
	int		i;
	char	*nv;

	i = 0;
	if (ft_strlen(s1) - slen == 0)
		nv = malloc(sizeof(char) * (ft_strlen(s1) - (slen) + 1));
	else
		nv = malloc(sizeof(char) * (ft_strlen(s1) - (slen + elen) + 1));
	if (!nv)
		return (NULL);
	i = 0;
	while (slen < (ft_strlen(s1) - elen))
	{
		nv[i] = s1[slen];
		i++;
		slen++;
	}
	nv[i] = '\0';
	return (nv);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*nvl;
	int				i;
	int				ttlen;
	int				elen;
	unsigned long	slen;

	i = 0;
	slen = 0;
	ttlen = 0;
	elen = 0;
	ttlen = ft_strlen(s1);
	while (isset(s1, set, i) == 1)
	{
		i++;
		slen++;
	}
	while (isset(s1, set, (ttlen - 1)) == 1)
	{
		ttlen--;
		elen++;
	}
	nvl = malloceur(s1, slen, elen);
	if (!nvl)
		return (NULL);
	return (nvl);
}

/*int	main(void)
{
	printf("%s", ft_strtrim(" xx xcff x    xxx", " x"));
}*/
