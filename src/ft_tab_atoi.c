/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_atoi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauplat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/13 16:35:50 by jauplat           #+#    #+#             */
/*   Updated: 2018/05/14 12:04:50 by jauplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	*ft_tab_atoi(char **argv, int argc, int len)
{
	int		i[3];
	long	*a;

	i[2] = 0;
	i[1] = 1;
	a = (long *)malloc(sizeof(long) * len);
	while (i[1] < argc)
	{
		i[0] = 0;
		while (argv[i[1]][i[0]])
		{
			if ((ft_isdigit(argv[i[1]][i[0]]) || argv[i[1]][i[0]] == '-') \
				&& (i[0] == 0 || argv[i[1]][i[0] - 1] == ' '))
			{
				a[i[2]] = ft_atoi(argv[i[1]] + i[0]);
				i[2]++;
			}
			i[0]++;
		}
		i[1]++;
	}
	return (a);
}
