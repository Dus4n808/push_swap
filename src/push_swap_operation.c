/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_operation.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:16:26 by dufama            #+#    #+#             */
/*   Updated: 2025/10/28 11:49:34 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	i_sa(t_stack **a)
{
	t_stack	*first;
	t_stack *second;

	if (!a || !*a || !(*a)->next)
		return ;
	first = *a;
	second = (*a)->next;
	first->next = second->next;
	second->next = first;
	*a = second;
	ft_printf("sa\n");
}

void	i_sb(t_stack **b)
{
	t_stack	*first;
	t_stack *second;

	if (!b || !*b || !(*b)->next)
		return ;
	first = *b;
	second = (*b)->next;
	first->next = second->next;
	second->next = first;
	*b = second;
	ft_printf("sb\n");
}

void	i_pa(t_stack **a, t_stack **b)
{
	t_stack *frist_b;
	t_stack *tmp;

	if (!b || !*b || !(*b)->next)
		return ;
	tmp = *b;
	ft_pop_front(&a, frist_b);
	*b = tmp;
}

