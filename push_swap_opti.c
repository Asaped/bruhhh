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

static void	bubble_sort(int *new_tab, t_stack *a)
{
	int	i;
	int	j;
	int	temp;

	i = -1;
	while (++i < a->num_count - 1)
	{
		j = -1;
		while (++j < a->num_count - i - 1)
		{
			if (new_tab[j] > new_tab[j + 1])
			{
				temp = new_tab[j];
				new_tab[j] = new_tab[j + 1];
				new_tab[j + 1] = temp;
			}
		}
	}
}

static void	cpy_tab(int *new_tab, t_stack *a)
{
	int	i;
	int	j;

	i = -1;
	while (++i < a->num_count)
	{
		j = -1;
		while (++j < a->num_count)
		{
			if (a->num[i] == new_tab[j])
			{
				a->num[i] = j + 1;
				break ;
			}
		}
	}
}

void	opti_tab(t_stack *a)
{
	int	*new_tab;
	int	i;

	i = -1;
	new_tab = malloc((a->num_count) * sizeof (int));
	if (!new_tab)
		return ;
	while (++i < a->num_count)
		new_tab[i] = a->num[i];
	bubble_sort(new_tab, a);
	cpy_tab(new_tab, a);
	free(new_tab);
}
