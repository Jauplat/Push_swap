/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauplat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/27 19:14:32 by jauplat           #+#    #+#             */
/*   Updated: 2018/05/15 14:25:43 by jauplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_longchr(long *y, long c, int len)
{
	int		i;

	i = 0;
	while (len != 0)
	{
		if (y[i] == c)
			return (i);
		i++;
		len--;
	}
	return (i);
}

long	ft_longcmp(long *a, int *len)
{
	int		i;
	int		k;

	k = 0;
	i = 1;
	if (len[1] > 0)
		return (1);
	if (a[0] != ft_min(a, len[2]))
		return (1);
	if (a[len[2] - 1] != ft_max(a, len[2]))
		return (1);
	while (i < len[2])
	{
		if (a[i] < a[i - 1])
			k++;
		i++;
	}
	return (0);
}

int		ft_acmp(long *a, int len)
{
	int		i;
	int		k;
	long	x;
	long	y;

	x = ft_max(a, len);
	y = ft_min(a, len);
	k = 0;
	i = 0;
	while (i < len)
	{
		if (i > 0 && a[i] < a[i - 1] && a[i - 1] != x && a[i] != x)
			k++;
		i++;
	}
	if (i == len && k == 0 && (a[len - 1] != x))
	{
		if (a[len - 1] > a[0])
			k++;
	}
	return (k);
}

int		ft_bcmp(long *b, int len)
{
	int		i;
	int		k;
	long	x;

	x = ft_max(b, len);
	k = 0;
	i = 0;
	while (i < len)
	{
		if (b[i - 1] == x && b[i] == ft_min(b, len) && k == 0)
			i++;
		if (b[i] > b[i - 1] && i > 0)
			k++;
		i++;
	}
	if (i == len && k == 0 && b[len - 1] != x)
	{
		if (b[len - 1] < b[0])
			k++;
	}
	return (k);
}
