/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:12:04 by dufama            #+#    #+#             */
/*   Updated: 2025/10/27 15:49:34 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(void)
{
	t_stack *a;
	t_stack *second;
	t_stack *third;

	// Création manuelle de 3 éléments
	a = malloc(sizeof(t_stack));
	second = malloc(sizeof(t_stack));
	third = malloc(sizeof(t_stack));

	// Initialisation des valeurs
	a->value = 1;
	second->value = 2;
	third->value = 3;

	// Chaînage des pointeurs
	a->next = second;
	second->next = third;
	third->next = NULL;

	// Affichage avant le swap
	ft_printf("Avant swap : %d -> %d -> %d\n",
		a->value, a->next->value, a->next->next->value);

	// Appel de ta fonction
	i_sa(&a);

	// Affichage après le swap
	ft_printf("Après swap : %d -> %d -> %d\n",
		a->value, a->next->value, a->next->next->value);

	// Nettoyage mémoire
	free(a->next->next);
	free(a->next);
	free(a);

	return (0);
}
