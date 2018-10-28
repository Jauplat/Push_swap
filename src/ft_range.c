/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauplat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/04 17:09:28 by jauplat           #+#    #+#             */
/*   Updated: 2018/05/15 18:01:26 by jauplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_range_xy(long *a, int len, long x)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (len < 2)
		return (0);
	while (a[i] > x && i < len)
		i++;
	while (j < len)
	{
		if (a[j] > a[i] && a[j] < x)
			i = j;
		j++;
	}
	if (i == len)
		return (ft_range_max(a, len));
	if (i <= (len / 2) && i != 0)
		return (1);
	else if (i > (len / 2))
		return (-1);
	return (0);
}

int		ft_range_x(long *a, int len, long x)
{
	int		i;
	int		j;

	j = 1;
	i = 0;
	if (len < 2)
		return (0);
	while (a[i] > x && i < len)
		i++;
	if (i == 0)
		return (0);
	while ((len - j) < i)
	{
		if (a[len - j] != a[i] && a[len - j] <= x)
			i = len - j;
		j++;
	}
	if (i == len)
		return (0);
	return (i);
}

int		ft_range_y(long *a, int len, long x)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (len < 2)
		return (0);
	while (a[i] < x && i < len)
		i++;
	while (j < len)
	{
		if (a[j] < a[i] && a[j] > x)
			i = j;
		j++;
	}
	if (i == len)
		return (ft_range_min(a, len));
	if (i <= (len / 2) && i != 0)
		return (1);
	else if (i > (len / 2))
		return (-1);
	return (0);
}

int		ft_range_min(long *a, int len)
{
	int		i;
	long	min;

	min = ft_min(a, len);
	i = 0;
	while (a[i] != min)
		i++;
	if (i < (len / 2) && i != 0)
		return (1);
	else if (i >= (len / 2))
		return (-1);
	return (0);
}

int		ft_range_max(long *a, int len)
{
	int		i;
	long	max;

	max = ft_max(a, len);
	i = 0;
	while (a[i] != max)
		i++;
	if (i <= (len / 2) && i != 0)
		return (1);
	else if (i > (len / 2))
		return (-1);
	return (0);
}
