/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauplat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 13:38:47 by jauplat           #+#    #+#             */
/*   Updated: 2018/05/15 17:11:47 by jauplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

void	ft_init(long **a, int len);
void	ft_mediane(long **a, long **b, int **len);
int		check_mediane(int *len);

long	*ft_checker(long *a, int *len);
int		ft_sorta(long **a, long **b, char *str, int **len);

int		ft_longchr(long *y, long c, int len);
int		ft_lentab(char **argv, int argc);
long	ft_max(long *a, int len);
long	ft_min(long *a, int len);
int		ft_range_max(long *a, int len);
int		ft_range_min(long *a, int len);
int		ft_range_x(long *a, int len, long x);
int		ft_range_y(long *a, int len, long x);
int		ft_range_xy(long *a, int len, long x);

void	ft_sa(long **a, int len);
void	ft_sb(long **b, int len);
void	ft_ss(long **a, long **b, int *len);
void	ft_sswap(long **a, long **b, long x, int *len);

void	rrotate_mediane(long **a, long **b, int *len, long x);
void	rrotate(long **a, long **b, int *len);
void	ft_rrotate(long **tab, int len);
void	ft_rrb(long **b, int lenb);
void	ft_rra(long **a, int lena);
void	ft_rrr(long **a, long **b, int *len);

void	rotate_mediane(long **a, long **b, int *len, long x);
void	rotate(long **a, long **b, int *len);
void	ft_rotate(long **tab, int len);
void	ft_rb(long **b, int lenb);
void	ft_ra(long **a, int lena);
void	ft_rr(long **a, long **b, int *len);

void	ft_pb(long **a, long **b, int *lena, int *lenb);
void	ft_pa(long **a, long **b, int *lena, int *lenb);

int		ft_check(int argc, char **argv);
int		ft_double(long *a, int len);
void	ft_error(int i);

int		ft_bcmp(long *b, int len);
int		ft_acmp(long *a, int len);
long	*ft_algo(long *a, int *len);
long	*ft_algobis(long *a, int *len);

long	*ft_finaltab(long *a, int *len);
long	ft_longcmp(long *a, int *len);
int		lentab(char **argv, int argc);
long	*ft_tab_atoi(char **argv, int argc, int len);
int		ft_char(char **argv, int argc);
int		main(int argc, char **argv);

#endif
