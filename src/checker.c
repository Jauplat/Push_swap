/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauplat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 16:21:00 by jauplat           #+#    #+#             */
/*   Updated: 2018/05/17 13:48:56 by jauplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sortb(long **a, long **b, char *str, int **len)
{
	if (ft_strcmp(str, "ra") == 0)
		ft_ra(&a[0], len[0][0]);
	else if (ft_strcmp(str, "rb") == 0)
		ft_rb(&b[0], len[0][1]);
	else if (ft_strcmp(str, "rr") == 0)
		ft_rr(&a[0], &b[0], len[0]);
	else if (ft_strcmp(str, "sa") == 0)
		ft_sa(&a[0], len[0][0]);
	else if (ft_strcmp(str, "sb") == 0)
		ft_sb(&b[0], len[0][1]);
	else if (ft_strcmp(str, "ss") == 0)
		ft_ss(&a[0], &b[0], len[0]);
	else
		ft_error(-1);
}

int		ft_sorta(long **a, long **b, char *str, int **len)
{
	int		i;

	i = 0;
	if ((str[0] == 'r' || str[0] == 's') && str[2] == '\0')
		ft_sortb(&a[0], &b[0], str, len);
	else if (ft_strcmp(str, "rra") == 0)
		ft_rra(&a[0], len[0][0]);
	else if (ft_strcmp(str, "rrb") == 0)
		ft_rrb(&b[0], len[0][1]);
	else if (ft_strcmp(str, "rrr") == 0)
		ft_rrr(&a[0], &b[0], len[0]);
	else if (ft_strcmp(str, "pa") == 0)
		ft_pa(&a[0], &b[0], &len[0][0], &len[0][1]);
	else if (ft_strcmp(str, "pb") == 0)
		ft_pb(&a[0], &b[0], &len[0][0], &len[0][1]);
	else
		ft_error(-1);
	i++;
	return (i);
}

long	*ft_checker(long *a, int *len)
{
	long	*b;
	char	*str;
	int		r;
	int		i;

	b = (long *)malloc(sizeof(long) * len[0]);
	str = ft_strnew(4);
	i = 0;
	r = 0;
	while ((r = get_next_line(0, &str)) > 0)
		i += ft_sorta(&a, &b, str, &len);
	free(b);
	ft_strdel(&str);
	return (a);
}

int		long_sort_len(long *a, int *len)
{
	int		i;

	i = 1;
	while (i < len[0])
	{
		if (a[i] < a[i - 1])
			return (i);
		i++;
	}
	return (i);
}

int		main(int argc, char **argv)
{
	long	*a;
	int		*len;
	int		i;

	len = (int*)malloc(sizeof(int) * 4);
	((i = ft_check(argc, argv))) ? ft_error(i) : NULL;
	len[0] = ft_lentab(argv, argc);
	len[1] = 0;
	len[2] = len[0];
	a = ft_tab_atoi(argv, argc, len[0]);
	(ft_double(a, len[0]) == -1) ? ft_error(-1) : NULL;
	a = ft_checker(a, len);
	i = long_sort_len(a, len);
	(i == len[0]) ? ft_putendl("OK") : ft_putendl("KO");
	free(len);
	free(a);
	return (0);
}
