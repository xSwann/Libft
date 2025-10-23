/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slatrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:43:19 by slatrech          #+#    #+#             */
/*   Updated: 2024/12/02 14:39:08 by slatrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <string.h>

int	ft_strncmp(const char *f, const char *s, size_t l)
{
	size_t	i;

	i = 0;
	if (l == 0)
		return (0);
	if (ft_strlen(f) == 0 && ft_strlen(s) > 0)
		return (-1);
	if (ft_strlen(s) == 0 && ft_strlen(f) > 0)
		return (1);
	while (i < l && s[i] && f[i])
	{
		if ((unsigned char)f[i] != (unsigned char)s[i])
			break ;
		i++;
	}
	if (i < l)
		return ((unsigned char)f[i] - (unsigned char)s[i]);
	return (0);
}

/*int	main(void)
{
//	char s[] = "hellof fffff";
//	char d[] = "  he  lloffffff";
	printf("My fc: %d\n", ft_strncmp("test\200", "test\0", 6));
	printf("OG fc: %d", strncmp("test\200", "test\0", 6));
}*/
