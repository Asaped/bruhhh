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

int	find_max(t_stack *a)
{
	int	i;
	int	pos;

	i = 0;
	pos = 0;
	while (i < a->num_count)
	{
		if (a->num[pos] < a->num[i])
			pos = i;
		i++;
	}
	return (pos);
}

int	find_min(t_stack *a)
{
	int	i;
	int	pos;

	i = 0;
	pos = 0;
	while (i < a->num_count)
	{
		if (a->num[pos] > a->num[i])
			pos = i;
		i++;
	}
	return (pos);
}

int	a_is_sorted(t_stack	a)
{
	int	i;

	i = a.num_count;
	if (a.num_count > 1)
	{
		while (i > 0)
		{
			if (a.num[i] < a.num[i - 1])
				i--;
			else
				return (1);
		}
	}
	return (0);
}
