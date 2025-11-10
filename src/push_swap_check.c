/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:03:38 by dufama            #+#    #+#             */
/*   Updated: 2025/11/10 10:14:35 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_if_is_valid_digit(char **tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			if (!(ft_isdigit(tab[i][j])
				|| (tab[i][j] == '-' && j == 0 && tab[i][j + 1] != '\0')
				|| (tab[i][j] == '+' && j == 0 && tab[i][j + 1] != '\0')))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_overflow(char **tab)
{
	long	tmp;
	int		i;

	i = 0;
	while (tab[i])
	{
		tmp = ft_atol(tab[i]);
		if (tmp > INT_MAX || tmp < INT_MIN)
			return (1);
		i++;
	}
	return (0);
}

int	check_duplicate(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] == tab[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
