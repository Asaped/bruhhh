/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mturki <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:40:00 by mturki            #+#    #+#             */
/*   Updated: 2022/06/22 16:31:57 by mturki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				*num;
	int				num_count;
	char			**pr;
	int				*numb;
	int				numb_count;
}							t_stack;

void	radix_sort(t_stack *a);

int		find_max(t_stack *a);

int		find_min(t_stack *a);

void	push_swap_tree(t_stack *a);

void	push_swap_for_five(t_stack *a);

int		no_double(int *tab, int ac);

size_t	ft_strlen(const char *s);

int		num(int c);

int		ft_atoi(const char *str);

void	ft_error(t_stack a, int ac);

int		only_digit(char **str, int i, int j);

t_stack	count_number(t_stack a, int ac);

t_stack	ft_tabini(int ac, char **av);

int		a_is_sorted(t_stack a);

int		ft_count(char const *s, char c);

int		ft_count_parts(char const *s, char c);

char	**ft_split(char const *s, char c);

void	opti_tab(t_stack *a);

void	sa(t_stack *a);

void	sb(t_stack *a);

void	ss(t_stack *a);

void	pa(t_stack *a);

void	pb(t_stack *a);

void	ra(t_stack *a);

void	rb(t_stack *a);

void	rr(t_stack *a);

void	rra(t_stack *a);

void	rrb(t_stack *a);

void	rrr(t_stack *a);

#endif
