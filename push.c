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

static void	push(int *from, int *count_from, int *to, int *count_to)
{
	if (*count_from == 0)
		return ;
	to[*count_to] = from[*count_from - 1];
	from[*count_from - 1] = 0;
	*count_to += 1;
	*count_from -= 1;
}

void	pa(t_stack *a)
{
	push(a->numb, &a->numb_count, a->num, &a->num_count);
	write(1, "pa\n", 3);
}

void	pb(t_stack *a)
{
	push(a->num, &a->num_count, a->numb, &a->numb_count);
	write(1, "pb\n", 3);
}
