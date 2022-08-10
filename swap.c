/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_is_sorted.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mturki <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:07:27 by mturki            #+#    #+#             */
/*   Updated: 2022/06/22 17:16:45 by mturki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(int num_count, int *stack)
{
	int	tmp;

	if (num_count > 1)
	{
		tmp = stack[num_count - 1];
		stack[num_count - 1] = stack[num_count - 2];
		stack[num_count - 2] = tmp;
	}
}

void	sa(t_stack *a)
{
	swap(a->num_count, a->num);
	write(1, "sa\n", 3);
}

void	sb(t_stack *a)
{
	swap(a->numb_count, a->numb);
	write(1, "sb\n", 3);
}

void	ss(t_stack *a)
{
	swap(a->num_count, a->num);
	swap(a->numb_count, a->numb);
	write(1, "ss\n", 3);
}
