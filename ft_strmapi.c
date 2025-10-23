/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slatrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 09:41:17 by slatrech          #+#    #+#             */
/*   Updated: 2024/11/28 09:42:50 by slatrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*nvl;

	i = 0;
	nvl = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!nvl)
		return (NULL);
	while (s[i])
	{
		nvl[i] = f(i, s[i]);
		i++;
	}
	nvl[i] = '\0';
	return (nvl);
}
