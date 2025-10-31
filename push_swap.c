/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:12:04 by dufama            #+#    #+#             */
/*   Updated: 2025/10/31 13:39:48 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	**check_and_parse(int argc, char **argv)
{
	char	**input;

	input = split_and_join(argc, argv);
	if (check_if_is_valid_digit(input) || check_overflow(input))
	{
		ft_printf("Error\n");
		exit(1);
	}
	return (input);
}

static void	init_stack(t_stack **a, t_stack **b, int size, int *tab_int)
{
	*a = NULL;
	*b = NULL;
	if (check_duplicate(tab_int, size))
	{
		ft_printf("Error\n");
		exit(1);
	}
	fill_the_stack(tab_int, size, a);
	put_all_in_negatif(*a);
	normalize_index(*a);
}

int	main(int argc, char **argv)
{
	char	**tab;
	int		size;
	int		*tab_int;
	t_stack	*stack_a;
	t_stack	*stack_b;

	tab = check_and_parse(argc, argv);
	size = count_size_of_tab(tab);
	tab_int = convert_tab_and_free_old(tab, size);
	init_stack(&stack_a, &stack_b, size, tab_int);
	if (check_if_is_sort(stack_a))
		radix_sort(&stack_a, &stack_b);
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}
