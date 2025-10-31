/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_radix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 10:41:44 by dufama            #+#    #+#             */
/*   Updated: 2025/10/31 13:32:29 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_if_is_sort(t_stack *a)
{
	t_stack	*tmp;
	int		index;

	tmp = a;
	index = 0;
	if (!a)
		return (0);
	while (tmp)
	{
		if (tmp->index == index)
			index++;
		else
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

void	check_bits_and_do(t_stack **a, t_stack **b, int i)
{
	int	size;
	int	j;
	int	bit;

	size = stack_size(*a);
	j = 0;
	while (j < size)
	{
		bit = (((*a)->index) >> i) & 1;
		if (bit == 0)
			i_pb(a, b);
		else
			i_ra(a);
		j++;
	}
	while (*b)
		i_pa(a, b);
}

void	radix_sort(t_stack **a, t_stack **b)
{
	int	round;
	int	i;

	round = found_max_bits(*a);
	if (!a || !*a || (*a)->next == NULL)
		return ;
	i = 0;
	while (i < round)
	{
		check_bits_and_do(a, b, i);
		i++;
	}
}
