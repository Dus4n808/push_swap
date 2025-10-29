/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:12:04 by dufama            #+#    #+#             */
/*   Updated: 2025/10/29 11:22:08 by dufama           ###   ########.fr       */
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


int	main(int argc, char **argv)
{
	// ft_printf("======= stack a========\n");
	// t_stack *a;

	// a = creat_stack(5);

	// print_stack(a, 'A');

	// // Appel de ta fonction
	// ft_printf("====== modification de la stack ========\n");

	// i_sa(&a);

	// print_stack(a, 'A');

	// ft_printf("===== creation de b =======\n");
	// t_stack *b;

	// b = creat_stack(5);
	// print_stack(b, 'B');
	// // ft_printf("===== Modification de la stack B\n");
	// // i_sb(&b);
	// // print_stack(b, 'B');
	// print_stack(a, 'A');
	// print_stack(b, 'B');

	// // Nettoyage mémoire
	// free_stack(a);
	// free_stack(b);
	char **test = split_and_join(argc, argv);
	if (check_if_is_valid_digit(test))
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

	// int *tab_test;

	// tab_test = NULL;
	// convert_tab_and_free_old(test, &tab_test, size);
	// i = 0;
	// ft_printf("%d\n", tab_test);
	// while (i < size)
	// {
	// 	ft_printf("%d\n", *tab_test[i]);
	// 	i++;
	// }



	return (0);
}
