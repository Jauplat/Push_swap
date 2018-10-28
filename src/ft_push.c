/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauplat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/13 16:47:53 by jauplat           #+#    #+#             */
/*   Updated: 2018/05/14 13:28:06 by jauplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(long **a, long **b, int *lena, int *lenb)
{
	long	t;

	t = b[0][0];
	if (lenb[0] >= 1)
	{
		lena[0]++;
		ft_rrotate(a, lena[0]);
		a[0][0] = t;
		ft_rotate(b, lenb[0]);
		lenb[0]--;
	}
}

void	ft_pb(long **a, long **b, int *lena, int *lenb)
{
	long	t;

	t = a[0][0];
	if (lena[0] >= 1)
	{
		lenb[0]++;
		ft_rrotate(b, lenb[0]);
		b[0][0] = t;
		lena[0]--;
		ft_rotate(a, lena[0]);
	}
}
