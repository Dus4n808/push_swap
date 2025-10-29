/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 10:17:46 by dufama            #+#    #+#             */
/*   Updated: 2025/10/29 16:56:22 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_back(t_stack **stack, t_stack *new)
{
	t_stack	*current;

	current = *stack;
	if (!new)
		return ;
	if (*stack == NULL)
	{
		*stack = new;
		return ;
	}
	while (current->next != NULL)
		current = current->next;
	current->next = new;
}

void	fill_the_stack(int *tab, int size, t_stack **a)
{
	int	i;
	t_stack	*new_node;

	i = 0;
	while (i < size)
	{
		new_node = malloc(sizeof(t_stack));
		if (!new_node)
			return ;
		new_node->value = tab[i];
		new_node->next = NULL;
		ft_push_back(a, new_node);
		i++;
	}

}
