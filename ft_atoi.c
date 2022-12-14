/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkurdy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:53:00 by lkurdy            #+#    #+#             */
/*   Updated: 2022/05/05 14:46:11 by lkurdy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *npt)
{
	int		i;
	long	p;
	int		m;

	i = 0;
	p = 0;
	m = 1;
	while ((npt[i] <= 13 && npt[i] >= 9) || npt[i] == ' ')
		i++;
	if (npt[i] == '+' || npt[i] == '-')
	{
		if (npt[i] == '-')
			m = -m;
		i++;
	}
	while (npt[i] <= '9' && npt[i] >= '0')
	{
		p = p * 10;
		p = p + (npt[i] - 48);
		i++;
	}
	return (p * m);
}
