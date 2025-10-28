/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:12:04 by dufama            #+#    #+#             */
/*   Updated: 2025/10/28 16:24:39 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack *a, char stack)
{
	t_stack	*tmp;

	tmp = a;
	while (tmp)
	{
		ft_printf("Stack %c : %d\n",stack, tmp->value);
		tmp = tmp->next;
	}
}

t_stack	*creat_stack(int nbr_of_value)
{
	t_stack *head = NULL;
	t_stack *new;
	int i;

	i = 1;
	while (i <= nbr_of_value)
	{
		new = malloc(sizeof(t_stack));
		if (!new)
			return (NULL);
		new->value = i;
		new->next = NULL;
		ft_push_back(&head, new);
		i++;
	}
	return (head);
}

void	free_stack(t_stack *stack)
{
	t_stack *tmp;

	while (stack)
	{
		tmp = stack->next;
		free(stack);
		stack = tmp;
	}
}


int	main(void)
{
	ft_printf("======= stack a========\n");
	t_stack *a;

	a = creat_stack(5);

	print_stack(a, 'A');

	// Appel de ta fonction
	ft_printf("====== modification de la stack ========\n");

	i_sa(&a);

	print_stack(a, 'A');

	ft_printf("===== creation de b =======\n");
	t_stack *b;

	b = creat_stack(5);
	print_stack(b, 'B');
	// ft_printf("===== Modification de la stack B\n");
	// i_sb(&b);
	// print_stack(b, 'B');
	print_stack(a, 'A');
	print_stack(b, 'B');

	// Nettoyage mémoire
	free_stack(a);
	free_stack(b);

	return (0);
}
