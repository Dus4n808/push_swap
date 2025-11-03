/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_operation.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:16:26 by dufama            #+#    #+#             */
/*   Updated: 2025/11/03 16:21:09 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	i_pa(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (*b == NULL)
	{
		ft_printf("Stack B is empty\n");
		return ;
	}
	tmp = *b;
	*b = (*b)->next;
	tmp->next = *a;
	*a = tmp;
	ft_printf("pa\n");
}

void	i_pb(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (*a == NULL)
	{
		ft_printf("Stack A is empty\n");
		return ;
	}
	tmp = *a;
	*a = (*a)->next;
	tmp->next = *b;
	*b = tmp;
	ft_printf("pb\n");
}

void	i_ra(t_stack **a)
{
	t_stack	*top;
	t_stack	*tmp;

	if (*a == NULL || !(*a) || (*a)->next == NULL)
		return ;
	top = *a;
	*a = (*a)->next;
	tmp = *a;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = top;
	top->next = NULL;
	ft_printf("ra\n");
}

void	i_rrb(t_stack **b)
{
	t_stack *before_last;
	t_stack *tmp;

	if (*b == NULL || !(*b) || (*b)->next == NULL)
		return ;
	tmp = *b;
	before_last = NULL;
	while (tmp->next != NULL)
	{
		before_last = tmp;
		tmp = tmp->next;
	}
	before_last->next = NULL;
	tmp->next = *b;
	*b = tmp;
	ft_printf("rrb\n");
}

void	i_rra(t_stack **a)
{
	t_stack *before_last;
	t_stack *tmp;

	if (*a == NULL || !(*a) || (*a)->next == NULL)
		return ;
	tmp = *a;
	before_last = NULL;
	while (tmp->next != NULL)
	{
		before_last = tmp;
		tmp = tmp->next;
	}
	before_last->next = NULL;
	tmp->next = *a;
	*a = tmp;
	ft_printf("rra\n");
}
