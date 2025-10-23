/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slatrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:34:01 by slatrech          #+#    #+#             */
/*   Updated: 2024/11/18 13:46:52 by slatrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	ft_bzero(void *dest, size_t count)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = dest;
	i = 0;
	while (i < count)
	{
		ptr[i] = 0;
		i++;
	}
}

/*int   main()
{
        char    d[5];
	bzero(d, 5);
        ft_bzero(d, 5);
}*/
