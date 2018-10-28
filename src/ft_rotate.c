/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauplat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/13 16:43:56 by jauplat           #+#    #+#             */
/*   Updated: 2018/05/15 15:05:09 by jauplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(long **tab, int len)
{
	int		i;

	i = 0;
	while (i < len)
	{
		tab[0][i] = tab[0][i + 1];
		i++;
	}
}

void	ft_rb(long **b, int lenb)
{
	long	x;

	if (lenb >= 2)
	{
		x = b[0][0];
		ft_rotate(b, lenb);
		b[0][lenb - 1] = x;
	}
}

void	ft_ra(long **a, int lena)
{
	long	x;

	if (lena >= 2)
	{
		x = a[0][0];
		ft_rotate(a, lena);
		a[0][lena - 1] = x;
	}
}

void	ft_rr(long **a, long **b, int *len)
{
	long	x;
	long	y;

	if (len[0] >= 2 && len[1] >= 2)
	{
		x = a[0][0];
		ft_rotate(a, len[0]);
		a[0][len[0] - 1] = x;
		y = b[0][0];
		ft_rotate(b, len[1]);
		b[0][len[1] - 1] = y;
	}
}

void	rotate(long **a, long **b, int *len)
{
	int		i;
	int		j;

	i = ft_range_y(a[0], len[0], ft_max(b[0], len[1]));
	j = ft_range_max(b[0], len[1]);
	while (i == 1 || j == 1)
	{
		i = ft_range_y(a[0], len[0], ft_max(b[0], len[1]));
		j = ft_range_max(b[0], len[1]);
		if (i == 1 && j == 1)
		{
			ft_rr(&a[0], &b[0], len);
			ft_putendl("rr");
		}
		else if (i == 1)
		{
			ft_ra(&a[0], len[0]);
			ft_putendl("ra");
		}
		else if (j == 1)
		{
			ft_rb(&b[0], len[1]);
			ft_putendl("rb");
		}
	}
}
