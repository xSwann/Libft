/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slatrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:55:07 by slatrech          #+#    #+#             */
/*   Updated: 2024/11/18 09:52:11 by slatrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_atoi(const char *ch)
{
	int	i;
	int	nb;
	int	signe;

	i = 0;
	nb = 0;
	signe = 1;
	while ((ch[i] >= 9 && ch[i] <= 13) || ch[i] == 32)
		i++;
	if (ch[i] == '-')
	{
		signe *= -1;
		i++;
	}
	else if (ch[i] == '+')
		i++;
	while (ch[i] >= '0' && ch[i] <= '9')
	{
		nb = (nb * 10) + (ch[i] - '0');
		i++;
	}
	return (nb * signe);
}
