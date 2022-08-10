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

static unsigned int	check_max_bits(t_stack *a)
{
	unsigned int	i;
	int				has_bit;
	int				j;

	i = 1;
	while (i != 0)
	{
		j = -1;
		has_bit = 0;
		while (a->num_count > ++j)
		{
			if (a->num[j] & i)
			{
				has_bit = 1;
			}
		}
		if (!has_bit)
			return (i);
		i <<= 1;
	}
	return (1 << 31);
}

void	radix_sort(t_stack *a)
{
	unsigned int	i;
	unsigned int	max_bit;
	int				j;
	int				count;

	max_bit = check_max_bits(a);
	i = 1;
	while (i < max_bit)
	{
		j = -1;
		count = a->num_count;
		while (++j < count)
		{
			if (!(a->num[a->num_count - 1] & i))
				pb(a);
			else
				ra(a);
		}
		while (a->numb_count)
			pa(a);
		i <<= 1;
	}
}
