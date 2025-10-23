/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slatrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:39:55 by slatrech          #+#    #+#             */
/*   Updated: 2024/11/13 13:34:08 by slatrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int value, size_t count)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = dest;
	i = 0;
	while (i < count)
	{
		ptr[i] = value;
		i++;
	}
	return (dest);
}

/*int	main()
{
	char	d[10];
	char 	*c;
	char	*x;
	//printf("My fc: %u\n", ft_memset(d, 5, 5));
	//printf("OG fc: %u", memset(d, 5, 5));
	c =(char *) ft_memset(d, 18, 10);
	//x =(char *) memset(d, 15, 10);
	printf("%d\n", c[2]);
	//printf("%d\n", x[2]);

}*/
