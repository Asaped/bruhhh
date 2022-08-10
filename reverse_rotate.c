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

static void	reverse_rotate(int *stack, int count)
{
	int	i;
	int	temp;
	int	temp2;

	i = count - 1;
	if (count >= 2)
	{
		temp2 = stack[0];
		while (i >= 0)
		{
			temp = stack[i];
			stack[i] = temp2;
			temp2 = temp;
			i--;
		}
	}
}

void	rra(t_stack *a)
{
	reverse_rotate(a->num, a->num_count);
	write(1, "rra\n", 4);
}

void	rrb(t_stack *a)
{
	reverse_rotate(a->numb, a->numb_count);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack *a)
{
	reverse_rotate(a->num, a->num_count);
	reverse_rotate(a->numb, a->numb_count);
	write(1, "rrr\n", 4);
}
