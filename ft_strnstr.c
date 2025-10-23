/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slatrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:15:22 by slatrech          #+#    #+#             */
/*   Updated: 2024/11/29 10:17:29 by slatrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	l;

	i = 0;
	j = 0;
	l = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (big[i])
	{
		l = i;
		while (little[j] == big[i] && i < len)
		{
			j++;
			i++;
			if (j == ft_strlen(little))
				return ((char *)(big + (i - j)));
		}
		i = l;
		j = 0;
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	const char	s1[] = "hello salut hey yes";
	const char	s2[] = "salut";
	char haystack[30] = "aaabcabcd";
		char needle[10] = "aabc";
		char * empty = (char*)"";
	printf("My fc: %s\n", ft_strnstr(haystack, "cd", 8));
	printf("OG fc: %s\n", strnstr(haystack, "cd", 8));
	if(ft_strnstr(haystack, "a", -1) == haystack)
		printf("%d\n", 5);
	else
		printf("%d", 4);
}*/
