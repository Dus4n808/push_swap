/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort_1_5.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:11:26 by dufama            #+#    #+#             */
/*   Updated: 2025/11/04 10:27:43 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_small_1_3(t_stack **a)
{
	int	one;
	int	two;
	int	three;

	one = (*a)->index;
	two = (*a)->next->index;
	three = (*a)->next->next->index;
	if (one > two && two < three && one < three)
		i_sa(a);
	else if (one > two && two > three)
	{
		i_sa(a);
		i_rra(a);
	}
	else if (one > two && two < three && one > three)
		i_ra(a);
	else if (one < two && two > three && one < three)
	{
		i_sa(a);
		i_ra(a);
	}
	else if (one < two && two > three && one > three)
		i_rra(a);
}

void	sort_small_1_4(t_stack **a, t_stack **b)
{
	while (stack_size(*a) > 3)
	{
		if ((*a)->index == 0)
			i_pb(a, b);
		else
			i_ra(a);
	}
	sort_small_1_3(a);
	i_pa(a, b);
}

void	sort_small_5(t_stack **a, t_stack **b)
{
	while (stack_size(*a) > 3)
	{
		if ((*a)->index == 0 || (*a)->index == 1)
			i_pb(a, b);
		else
			i_ra(a);
	}
	sort_small_1_3(a);
	if ((*b)->index < (*b)->next->index)
		i_sb(b);
	i_pa(a, b);
	i_pa(a, b);
}
