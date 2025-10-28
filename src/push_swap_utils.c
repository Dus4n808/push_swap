/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 10:17:46 by dufama            #+#    #+#             */
/*   Updated: 2025/10/28 11:51:09 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_back(t_stack **head, t_stack *new)
{
	t_stack	*current;

	current = *head;
	if (!new)
		return ;
	if (*head == NULL)
	{
		*head = new;
		return ;
	}
	while (current->next != NULL)
		current = current->next;
	current->next = new;
}

void 	ft_pop_front(t_stack **list, t_stack *node)
{
	if (!list || !node)
		return ;
	if (*list == NULL)
	{
		*list = node;
		return ;
	}
	node->next = *list;
	*list = node;
}
