/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mturki <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:40:41 by mturki            #+#    #+#             */
/*   Updated: 2022/06/22 16:35:09 by mturki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	count_number(t_stack a, int ac)
{
	int	i;

	i = 0;
	while (a.pr[i] != NULL)
		i++;
	a.num_count = i;
	a.numb_count = 0;
	a.num = malloc(sizeof(int) * a.num_count);
	a.numb = malloc(sizeof(int) * a.num_count);
	if (!a.num || !a.numb)
		ft_error(a, ac);
	return (a);
}

void	ft_error(t_stack a, int ac)
{
	int	i;

	i = 0;
	if (ac == 2)
		while (a.pr[i])
			free(a.pr[i++]);
	free(a.pr);
	free(a.num);
	free(a.numb);
	write(2, "Error\n", 6);
	exit (0);
}

int	only_digit(char **str, int i, int j)
{
	while (str[i])
	{
		while (str[i][j])
		{
			if (str[i][j] == '-' && num(str[i][j + 1]))
			{
				j++;
				while (num(str[i][j]))
					j++;
				if (!num(str[i][j]) && str[i][j])
					return (0);
			}
			else if (num(str[i][j]))
				j++;
			else
				return (0);
		}
		i++;
		j = 0;
	}
	return (1);
}

t_stack	ft_tabini(int ac, char **av)
{
	t_stack	a;
	int		i;
	int		j;

	j = 0;
	i = 1;
	if (ac > 2)
		a.pr = malloc(sizeof(char *) * ac);
	if (!a.pr && ac > 2)
		ft_error(a, ac);
	if (ac == 2)
		a.pr = ft_split(av[1], ' ');
	else if (ac > 2)
		while (i < ac)
			a.pr[j++] = av[i++];
	i = 0;	
	j = 0;
	if (!only_digit(a.pr, i, j))
		ft_error(a, ac);
	a = count_number(a, ac);
	j = a.num_count - 1;
	while (j >= 0)
		a.num[i++] = ft_atoi(a.pr[j--]);
	if (!no_double(a.num, a.num_count))
		ft_error(a, ac);
	return (a);
}
