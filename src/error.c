/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauplat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 14:32:05 by jauplat           #+#    #+#             */
/*   Updated: 2018/05/17 14:16:58 by jauplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_double(long *a, int len)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (j < len)
	{
		i = 0;
		while (i < len)
		{
			if ((a[i] == a[j] && i != j) || a[i] > INT_MAX || a[i] < INT_MIN)
				return (-1);
			i++;
		}
		j++;
	}
	return (0);
}

void	ft_error(int i)
{
	if (i == -1)
	{
		ft_putendl("Error");
		exit(0);
	}
	if (i == -2)
		exit(0);
}

int		ft_check(int argc, char **argv)
{
	if (argc < 2 || (argv[1][0] == '\0' && argc == 2))
		return (-2);
	if (ft_char(argv, argc) == -1)
		return (-1);
	return (0);
}
