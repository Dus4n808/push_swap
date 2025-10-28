/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 10:17:46 by dufama            #+#    #+#             */
/*   Updated: 2025/10/28 16:20:46 by dufama           ###   ########.fr       */
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
