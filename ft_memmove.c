/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slatrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:29:38 by slatrech          #+#    #+#             */
/*   Updated: 2024/11/29 11:11:40 by slatrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t size)
{
	char	*dest;
	char	*src;
	size_t	i;

	if (!destination && !source)
		return (NULL);
	dest = (char *)destination;
	src = (char *)source;
	i = 0;
	if (dest > src)
	{
		while (size-- > 0)
			dest[size] = src[size];
	}
	else
	{
		while (i < size)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (destination);
}

/*int	main(void)
{
	char	s[] = "hello";
	char	c[] = "salut";
	char sResult[] = {67, 68, 67, 68, 69, 0, 45};
	char	d[10];
	size_t	w = 3;
	printf("%p", ft_memmove(s, sResult, 2));
}*/
