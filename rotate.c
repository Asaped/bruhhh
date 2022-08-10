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

static void	rotate(int *stack, int count)
{
	int	i;
	int	temp;
	int	temp2;

	i = 0;
	if (count > 1)
	{
		temp2 = stack[count - 1];
		while (i < count)
		{
			temp = stack[i];
			stack[i] = temp2;
			temp2 = temp;
			i++;
		}
	}
}

void	ra(t_stack *a)
{
	rotate(a->num, a->num_count);
	write(1, "ra\n", 3);
}

void	rb(t_stack *a)
{
	rotate(a->numb, a->numb_count);
	write(1, "rb\n", 3);
}

void	rr(t_stack *a)
{
	rotate(a->num, a->num_count);
	rotate(a->numb, a->numb_count);
	write(1, "rr\n", 3);
}
