/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slatrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:06:40 by slatrech          #+#    #+#             */
/*   Updated: 2024/11/21 11:03:08 by slatrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (n <= dstlen)
		return (n + srclen);
	i = 0;
	while (src[i] && (dstlen + i + 1) < n)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	if (dstlen + i < n)
		dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}

/*int	main(void)
{
	char sa[] = "hello";
	char sb[] = "saluuuuuut";
	printf("My fc: %zu\n", ft_strlcat(sa, sb, 2));
	printf("OG fc: %zu", strlcat(sa, sb, 2));

}*/
