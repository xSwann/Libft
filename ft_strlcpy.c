/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slatrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:34:08 by slatrech          #+#    #+#             */
/*   Updated: 2024/11/19 13:19:43 by slatrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcpy(char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0)
	{
		while (i < (n - 1) && s2[i])
		{
			s1[i] = s2[i];
			i++;
		}
		s1[i] = '\0';
	}
	return (ft_strlen(s2));
}

/*int	main(void)
{
	char src[] = "coucou";
		char dest[10]; ft_memset(dest, 'A', 10);
	printf("My fc: %zu\n", ft_strlcpy(src, dest, -1));
	printf("OG fc: %zu", strlcpy(src, dest, -1));

}*/
