/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lentab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauplat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 15:09:30 by jauplat           #+#    #+#             */
/*   Updated: 2018/05/16 14:02:54 by jauplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_lentab(char **argv, int argc)
{
	int		i;
	int		j;
	int		len;

	len = 0;
	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
		{
			if ((ft_isdigit(argv[j][i]) || argv[j][i] == '-') && \
			(i == 0 || argv[j][i - 1] == ' '))
				len++;
			i++;
		}
		j++;
	}
	return (len);
}

long	ft_min(long *a, int len)
{
	int		j;
	long	min;

	j = 0;
	min = a[j];
	if (len == 0)
		return (0);
	while (j < len)
	{
		if (a[j] < min)
			min = a[j];
		j++;
	}
	return (min);
}

long	ft_max(long *a, int len)
{
	int		j;
	long	max;

	j = 0;
	max = a[j];
	while (j < len)
	{
		if (a[j] > max)
			max = a[j];
		j++;
	}
	return (max);
}

int		ft_char(char **argv, int argc)
{
	int		i;
	int		j;

	j = 1;
	while (j < (argc))
	{
		i = 0;
		while (argv[j][i])
		{
			if (((ft_isdigit(argv[j][i]) == 1) || argv[j][i] == ' ') || \
			(argv[j][i] == '-' && ft_isdigit(argv[j][i + 1]) == 1))
				i++;
			else if (((ft_isdigit(argv[j][i]) == 0) && argv[j][i] != ' ') || \
				(argv[j][i] == '-' && ft_isdigit(argv[j][i + 1]) == 0))
				return (-1);
		}
		j++;
	}
	return (0);
}
