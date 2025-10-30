/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_algo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 16:19:24 by dufama            #+#    #+#             */
/*   Updated: 2025/10/30 16:54:56 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	put_all_in_negatif(t_stack *a)
{
	t_stack	*tmp;

	tmp = a;
	while (tmp != NULL)
	{
		tmp->index = -1;
		tmp = tmp->next;
	}
}
void	normalize_index(t_stack *a)
{
	int		index;
	int		min_value;
	t_stack	*tmp;
	t_stack	*min_node;

	index = 0;
	while (1)
	{
		min_node = NULL;
		min_value = INT_MAX;
		tmp = a;
		while (tmp)
		{
			if (tmp->index == -1 && tmp->value < min_value)
			{
				min_value = tmp->value;
				min_node = tmp;
			}
			tmp = tmp->next;
		}
		if (min_node == NULL)
			break ;
		min_node->index = index;
		index++;
	}
}

// int	found_max_bits(t_stack *a)
// {

// }

// void	radix_sort(t_stack **a, t_stack **b)
// {

// }
