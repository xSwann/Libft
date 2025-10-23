/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slatrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:52:25 by slatrech          #+#    #+#             */
/*   Updated: 2024/11/18 15:33:57 by slatrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <string.h>

char	*ft_strchr(const char *s, int search)
{
	size_t	i;
	char	*nv;

	nv = (char *)s;
	i = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] == (char)search)
		{
			return (&nv[i]);
		}
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	const char c[] = "hello";
	printf("My fc: %s\n", ft_strchr(c, 0));
	printf("OG fc: %s", strchr(c, 0));
}*/
