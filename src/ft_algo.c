/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauplat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/13 17:12:41 by jauplat           #+#    #+#             */
/*   Updated: 2018/05/15 17:59:53 by jauplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lastrotate(long **a, int *len)
{
	if (len[1] == 0)
	{
		while (ft_range_min(a[0], len[0]) == 1)
		{
			ft_ra(&a[0], len[0]);
			ft_putendl("ra");
		}
		while (ft_range_min(a[0], len[0]) == -1)
		{
			ft_rra(&a[0], len[0]);
			ft_putendl("rra");
		}
	}
}

void	ft_init(long **a, int len)
{
	int		i;

	i = 0;
	while (i < len)
	{
		a[0][i] = 0;
		i++;
	}
}

long	*ft_finaltab(long *a, int *len)
{
	int		j;
	int		k;
	long	*tab;

	k = 0;
	tab = (long *)malloc(sizeof(long) * len[2]);
	while (k < len[2])
	{
		tab[k] = a[k];
		k++;
	}
	k = 0;
	while (k < len[2])
	{
		j = 0;
		while (j < len[2])
		{
			if (tab[j] > tab[k] && j != k)
				ft_swap(&tab[j], &tab[k]);
			j++;
		}
		k++;
	}
	return (tab);
}

long	*ft_algobis(long *a, int *len)
{
	long	*b;

	b = (long *)malloc(sizeof(long) * len[0]);
	ft_init(&b, len[2]);
	while (ft_acmp(a, len[0]))
		ft_mediane(&a, &b, &len);
	while (ft_longcmp(a, len) != 0)
	{
		while (len[1] != 0 && (b[0] != ft_max(b, len[1]) || \
		ft_range_y(a, len[0], ft_max(b, len[1])) != 0))
		{
			rotate(&a, &b, len);
			rrotate(&a, &b, len);
		}
		ft_lastrotate(&a, len);
		if (len[1] > 0)
		{
			ft_pa(&a, &b, &len[0], &len[1]);
			ft_putendl("pa");
		}
	}
	free(b);
	return (a);
}
