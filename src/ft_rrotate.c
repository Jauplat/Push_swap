/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauplat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/13 16:35:35 by jauplat           #+#    #+#             */
/*   Updated: 2018/05/14 11:25:28 by jauplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rrotate(long **tab, int len)
{
	int		i;

	i = len;
	while (i > 0)
	{
		tab[0][i] = tab[0][i - 1];
		i--;
	}
}

void	ft_rra(long **a, int lena)
{
	long	x;

	if (lena >= 2)
	{
		x = a[0][lena - 1];
		ft_rrotate(a, lena);
		a[0][0] = x;
	}
}

void	ft_rrb(long **b, int lenb)
{
	long	x;

	if (lenb >= 2)
	{
		x = b[0][lenb - 1];
		ft_rrotate(b, lenb);
		b[0][0] = x;
	}
}

void	ft_rrr(long **a, long **b, int *len)
{
	long	x;
	long	y;

	if (len[0] >= 2 && len[1] >= 2)
	{
		x = a[0][len[0] - 1];
		ft_rrotate(a, len[0]);
		a[0][0] = x;
		y = b[0][len[1] - 1];
		ft_rrotate(b, len[1]);
		b[0][0] = y;
	}
}

void	rrotate(long **a, long **b, int *len)
{
	int		i;
	int		j;

	i = ft_range_y(a[0], len[0], ft_max(b[0], len[1]));
	j = ft_range_max(b[0], len[1]);
	while (i == -1 || j == -1)
	{
		i = ft_range_y(a[0], len[0], ft_max(b[0], len[1]));
		j = ft_range_max(b[0], len[1]);
		if (i == -1 && j == -1)
		{
			ft_rrr(&a[0], &b[0], len);
			ft_putendl("rrr");
		}
		else if (i == -1)
		{
			ft_rra(&a[0], len[0]);
			ft_putendl("rra");
		}
		else if (j == -1)
		{
			ft_rrb(&b[0], len[1]);
			ft_putendl("rrb");
		}
	}
}
