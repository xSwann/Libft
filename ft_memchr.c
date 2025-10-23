/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slatrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:50:16 by slatrech          #+#    #+#             */
/*   Updated: 2024/12/02 16:06:40 by slatrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *data, int tofind, size_t size)
{
	unsigned char	*dt;
	unsigned char	tf;
	size_t			i;

	if (size == 0 && tofind == 0)
		return (NULL);
	dt = (unsigned char *)data;
	tf = tofind;
	i = 0;
	while (i < size)
	{
		if (dt[i] == tf)
		{
			return (dt + i);
		}
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char d[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	const unsigned int s = 10;
	int h;
	int k;

	h = (size_t)ft_memchr(d, 50, s);
	k = (size_t)memchr(d, 50, s);

	//printf("%d\n", h);
	//printf("%d", k);
	printf("My fc: %p\n", ft_memchr(d, 50, s));
	printf("OG fc: %p", memchr(d, 50, s));
}*/
