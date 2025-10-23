/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slatrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:35:04 by slatrech          #+#    #+#             */
/*   Updated: 2024/11/20 11:48:38 by slatrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t elementcount, size_t elementsize)
{
	unsigned char	*ch;
	size_t			i;
	size_t			size_max;

	i = 0;
	size_max = 0;
	if (elementcount != 0 && elementsize > (size_max - 1) / elementcount)
		return (NULL);
	ch = malloc(elementsize * elementcount);
	if (!ch)
		return (NULL);
	while (i < elementsize * elementcount)
	{
		ch[i] = 0;
		i++;
	}
	return ((void *)ch);
}

/*int main()
{
	printf("%ld", (size_t)+ 0);
	ft_calloc(4, sizeof(int));
	return (0);
}*/
