/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slatrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:05:25 by slatrech          #+#    #+#             */
/*   Updated: 2024/12/02 15:59:44 by slatrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t num)
{
	unsigned char	*dest;
	const char		*src;
	size_t			i;

	dest = destination;
	src = source;
	i = 0;
	if (destination == 0 && source == 0)
		return (NULL);
	while (i < num)
	{
		dest[i] = src[i];
		i++;
	}
	return (destination);
}

/*int	main()
{
	char	s[] = "j'ai des";
	char	d[100];
	size_t	w = 100;
	char	*af;
	char	*vf;
	
	af = (char *)ft_memcpy(d, s, w);
	vf = (char *)memcpy(d, s, w);
	printf("My fc: %s\n", af);
	printf("OG fc: %s", vf);
}*/
