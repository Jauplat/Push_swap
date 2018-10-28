/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauplat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 16:21:33 by jauplat           #+#    #+#             */
/*   Updated: 2018/05/15 18:01:29 by jauplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	*ft_three(long *a, int *len)
{
	if (a[0] == ft_max(a, len[0]) && a[2] == ft_min(a, len[0]))
	{
		ft_putendl("sa");
		ft_putendl("rra");
	}
	if (a[1] == ft_max(a, len[0]) && a[2] == ft_min(a, len[0]))
		ft_putendl("rra");
	if (a[0] == ft_max(a, len[0]) && a[1] == ft_min(a, len[0]))
		ft_putendl("ra");
	if (a[2] == ft_max(a, len[0]) && a[1] == ft_min(a, len[0]))
		ft_putendl("sa");
	if (a[1] == ft_max(a, len[0]) && a[0] == ft_min(a, len[0]))
	{
		ft_putendl("rra");
		ft_putendl("sa");
	}
	return (a);
}

int		main(int argc, char **argv)
{
	long	*a;
	int		*len;
	int		i;

	len = (int*)malloc(sizeof(int) * 3);
	if ((i = ft_check(argc, argv)))
		ft_error(i);
	len[0] = ft_lentab(argv, argc);
	len[2] = len[0];
	len[1] = 0;
	a = ft_tab_atoi(argv, argc, len[0]);
	if (ft_double(a, len[0]) == -1)
		ft_error(-1);
	if (len[2] == 3)
		a = ft_three(a, len);
	else
		a = ft_algobis(a, len);
	free(len);
	free(a);
	return (0);
}
