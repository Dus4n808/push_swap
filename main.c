/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:12:04 by dufama            #+#    #+#             */
/*   Updated: 2025/10/30 17:43:35 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack *a, char *name)
{
	ft_printf("Stack %s:\n", name);
	if (!a)
	{
		ft_printf("(empty)\n");
		return ;
	}
	while (a)
	{
		ft_printf("Valeurs : %d, Index : %d\n", a->value, a->index);
		a = a->next;
	}
	ft_printf("--------\n");
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

int	main(int argc, char **argv)
{
	char **test = split_and_join(argc, argv);
	if (check_if_is_valid_digit(test) || check_overflow(test))
	{
		ft_printf("Error\nInvalid input (Only Digit)");
		exit(1);
	}
	int i = 0;
	while (test[i] != NULL)
	{
		ft_printf("%s\n", test[i]);
		i++;
	}
	int size = count_size_of_tab(test);
	ft_printf("%d\n", size);


	ft_printf("====== conversion en int ==========\n");

	int *tab_test;

	tab_test = convert_tab_and_free_old(test, size);
	i = 0;
	if (tab_test)
	{
		while (i < size)
		{
			ft_printf("%d\n", tab_test[i]);
			i++;
		}
	}

	if (check_duplicate(tab_test, size))
	{
		ft_printf("Error\nDouble Digits");
		exit(1);
	}
	t_stack *stack_a;
	//t_stack *stack_b;

	stack_a = NULL;
	//stack_b = NULL;

	fill_the_stack(tab_test, size, &stack_a);
	print_stack(stack_a, "A");
	//put_all_in_negatif(stack_a);
	print_stack(stack_a, "A");
	normalize_index(stack_a);
	print_stack(stack_a, "A");

	// i_pb(&stack_a, &stack_b);
	// i_ra(&stack_a);
	// print_stack(stack_a, "A");
	// print_stack(stack_b, "B");



	return (0);
}
