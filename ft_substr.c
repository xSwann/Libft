/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slatrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:39:38 by slatrech          #+#    #+#             */
/*   Updated: 2024/11/28 13:41:14 by slatrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*nvl;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	else if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	nvl = malloc(sizeof(char) * len + 1);
	if (!nvl)
		return (NULL);
	i = 0;
	while (i < len && s[start])
	{
		nvl[i] = s[start];
		i++;
		start++;
	}
	nvl[i] = '\0';
	return (nvl);
}

/*int main()
{
	char	*str;
	char *n;
	str = ft_strdup("0123456789");
    	n = ft_substr(str, 9, 10);
    	printf("%s", n);
    	free (n);
    	return (0);
}*/
