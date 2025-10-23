/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slatrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:36:39 by slatrech          #+#    #+#             */
/*   Updated: 2024/11/20 13:36:39 by slatrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char	*nvl;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	nvl = malloc(sizeof(char) * len + 1);
	if (!nvl)
		return (NULL);
	while (src[i])
	{
		nvl[i] = src[i];
		i++;
	}
	nvl[i] = '\0';
	return (nvl);
}

/*int main()
{
    char *v;
    v = ft_strdup("hello");
    printf("%s", v);
    free(v);
    return (0);
}*/
