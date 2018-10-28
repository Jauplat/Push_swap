/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mediane.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauplat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 18:05:58 by jauplat           #+#    #+#             */
/*   Updated: 2018/05/16 14:09:00 by jauplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_mediane(long **a, long **b, int **len)
{
	int					i;
	int					j;
	static const long	*finaltab;

	if (len[0][0] == len[0][2])
		finaltab = ft_finaltab(a[0], len[0]);
	i = 0;
	j = check_mediane(len[0]);
	while (j > i && ft_acmp(a[0], len[0][0]) != 0)
	{
		if (a[0][0] <= finaltab[j] && len[0][0] > 2)
		{
			ft_pb(&a[0], &b[0], &len[0][0], &len[0][1]);
			ft_putendl("pb");
		}
		j = check_mediane(len[0]);
		while (ft_acmp(a[0], len[0][0]) && \
			(ft_range_x(a[0], len[0][0], finaltab[j]) != 0 || \
			ft_range_xy(b[0], len[0][1], a[0][0]) != 0))
		{
			rotate_mediane(&a[0], &b[0], len[0], finaltab[j]);
			rrotate_mediane(&a[0], &b[0], len[0], finaltab[j]);
		}
		i++;
	}
}

int		check_mediane(int *len)
{
	int		j;

	if (len[2] <= 10)
	{
		j = len[2] / 2;
		while (len[1] < len[2] - 2 && len[2] <= 10 && len[1] >= j)
			j += (len[0] / 2);
	}
	else
	{
		j = (len[2] / 10);
		while (len[1] >= j && len[2] > 10)
		{
			if (j + (len[2] / 10) >= (len[2] - 1))
				j = (len[2] - 1);
			else
				j += (len[2] / 10);
		}
	}
	return (j);
}

void	rotate_mediane(long **a, long **b, int *len, long x)
{
	int		j;
	int		i;

	i = ft_range_x(a[0], len[0], x);
	j = ft_range_xy(b[0], len[1], a[0][i]);
	while ((i <= (len[0] / 2) && i != 0) || j == 1)
	{
		if (j == 1 && (i > 0 && i <= (len[0] / 2)))
		{
			ft_rr(&a[0], &b[0], len);
			ft_putendl("rr");
		}
		else if (i > 0 && i <= (len[0] / 2))
		{
			ft_ra(&a[0], len[0]);
			ft_putendl("ra");
		}
		else if (j == 1)
		{
			ft_rb(&b[0], len[1]);
			ft_putendl("rb");
		}
		i = ft_range_x(a[0], len[0], x);
		j = ft_range_xy(b[0], len[1], a[0][i]);
	}
}

void	rrotate_mediane(long **a, long **b, int *len, long x)
{
	int		j;
	int		i;

	i = ft_range_x(a[0], len[0], x);
	j = ft_range_xy(b[0], len[1], a[0][i]);
	while (i > (len[0] / 2) || j == -1)
	{
		if (j == -1 && i > (len[0] / 2))
		{
			ft_rrr(&a[0], &b[0], len);
			ft_putendl("rrr");
		}
		else if (i > (len[0] / 2))
		{
			ft_rra(&a[0], len[0]);
			ft_putendl("rra");
		}
		else if (j == -1)
		{
			ft_rrb(&b[0], len[1]);
			ft_putendl("rrb");
		}
		i = ft_range_x(a[0], len[0], x);
		j = ft_range_xy(b[0], len[1], a[0][i]);
	}
}
