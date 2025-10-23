/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slatrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:38:14 by slatrech          #+#    #+#             */
/*   Updated: 2024/12/02 16:21:59 by slatrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <string.h>

char	*ft_strrchr(const char *s, int search)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if ((unsigned char)s[i] == (unsigned char)search)
		{
			return ((char *)(s + i));
		}
		i--;
	}
	return (NULL);
}

/*int	main(void)
{
	const char c[] = "tripouille";
	printf("My fc: %s\n", ft_strrchr(c, 0));
	printf("OG fc: %s", strrchr(c, 0));
}*/
