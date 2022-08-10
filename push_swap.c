/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mturki <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:39:43 by mturki            #+#    #+#             */
/*   Updated: 2022/06/22 16:57:41 by mturki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap_tree(t_stack *a)
{
	int	max;

	max = find_max(a);
	if (a->num_count == 3)
	{
		if (max == 1)
			rra(a);
		if (max == 2)
			ra(a);
		if (a->num[1] < a->num[2])
			sa(a);
	}	
}

void	push_swap_for_five(t_stack *a)
{
	int	min;
	int	min_pos;

	while (a->num_count > 3)
	{
		min = a->num[find_min(a)];
		min_pos = find_min(a);
		if (min_pos > (a->num_count / 2))
		{
			while (a->num[a->num_count - 1] != min)
				ra(a);
		}
		else
		{
			while (a->num[a->num_count - 1] != min)
				rra(a);
		}
		pb(a);
	}
	push_swap_tree(a);
	if (a->numb_count == 2 && a->numb[0] > a->numb[1])
		rb(a);
	while (a->numb_count)
		pa(a);
}

static int	algo_sort(t_stack *a)
{
	if (a->num_count == 0 || a->num_count == 1)
		return (0);
	else if (a->num_count == 2)
	{
		if (a->num[0] < a->num[1])
			ra(a);
	}
	else if (a->num_count == 3)
		push_swap_tree(a);
	else if (a->num_count == 4 || a->num_count == 5)
		push_swap_for_five(a);
	else
		radix_sort(a);
	return (1);
}

int	main(int ac, char **av)
{
	t_stack	a;
	int		i;

	i = 0;
	if (ac > 1)
	{
		a = ft_tabini(ac, av);
		if (!a_is_sorted(a))
			ft_error(a, ac);
		opti_tab(&a);
		algo_sort(&a);
	}
	if (ac == 2)
		while (a.pr[i])
			free(a.pr[i++]);
	free(a.pr);
	free(a.num);
	free(a.numb);
}
