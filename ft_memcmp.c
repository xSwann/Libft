/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slatrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:49:14 by slatrech          #+#    #+#             */
/*   Updated: 2024/11/18 15:00:00 by slatrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *p1, const void *p2, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (*(unsigned char *)(p1 + i) != *(unsigned char *)(p2 + i))
			return (*(unsigned char *)(p1 + i) - *(unsigned char *)(p2 + i));
		i++;
	}
	return (0);
}

/*int	main(void)
{
	int array1 [] = {-128, 0, 127, 0};
	int array2 [] = {-128, 0, 127, 0};
	printf("My fc: %d\n", ft_memcmp(array1, array2, 4));
	printf("OG fc: %d", memcmp(array1, array2, 4));

}*/
