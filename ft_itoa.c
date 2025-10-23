/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slatrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 13:14:20 by slatrech          #+#    #+#             */
/*   Updated: 2024/12/02 14:55:34 by slatrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr(long nb, int isn, char *nv)
{
	static int	i;
	char		aret;

	i = 0;
	if (isn == 1)
	{
		nv[i] = '-';
		i++;
		nb = nb * (-1);
	}
	if (nb < 0)
	{
		nb = nb * (-1);
	}
	if (nb >= 10)
	{
		i++;
		ft_putnbr(nb / 10, isn, nv);
	}
	aret = nb % 10 + '0';
	nv[i++] = aret;
}

char	*ft_itoa(int n)
{
	char	*nvl;
	int		nbn;
	long	tmpn;
	int		isn;

	nbn = 1;
	tmpn = n;
	isn = -1;
	if (n < 0)
	{
		isn = isn * (-1);
		tmpn = tmpn * (-1);
		nbn++;
	}
	while (tmpn >= 10)
	{
		tmpn = tmpn / 10;
		nbn++;
	}
	nvl = malloc(sizeof(char) * nbn + 1);
	if (!nvl)
		return (NULL);
	ft_putnbr(n, isn, nvl);
	nvl[nbn] = '\0';
	return (nvl);
}

/*int	main(void)
{
	printf("%s", ft_itoa(-1));
}*/
