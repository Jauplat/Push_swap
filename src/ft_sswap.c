/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauplat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/13 16:42:04 by jauplat           #+#    #+#             */
/*   Updated: 2018/05/15 13:37:19 by jauplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sb(long **b, int len)
{
	if (len >= 2)
		ft_swap(&b[0][0], &b[0][1]);
}

void	ft_sa(long **a, int len)
{
	if (len >= 2)
		ft_swap(&a[0][0], &a[0][1]);
}

void	ft_ss(long **a, long **b, int *len)
{
	if (len[0] >= 2 && len[1] >= 2)
	{
		ft_swap(&b[0][0], &b[0][1]);
		ft_swap(&a[0][0], &a[0][1]);
	}
}

void	ft_sswap(long **a, long **b, long x, int *len)
{
	int		i;

	i = 0;
	if ((len[0] >= 2 && a[0][0] > a[0][1] && a[0][0] > x && a[0][1] > x) && \
		(len[1] >= 2 && b[0][0] < b[0][1]))
	{
		ft_putendl("ss");
		ft_ss(&a[0], &b[0], len);
	}
	else if (len[0] >= 2 && a[0][0] > a[0][1] && a[0][0] > x && a[0][1] > x)
	{
		ft_putendl("sa");
		ft_sa(&a[0], len[0]);
	}
	else if (len[1] >= 2 && a[0][0] < a[0][1])
	{
		ft_putendl("sb");
		ft_sb(&b[0], len[1]);
	}
}
