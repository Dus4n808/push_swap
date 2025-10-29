/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_parsing.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:01:23 by dufama            #+#    #+#             */
/*   Updated: 2025/10/29 16:16:54 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**split_and_join(int argc, char **argv)
{
	char	**result;
	char	*join;
	char	*tmp;
	int		i;

	join = ft_strdup("");
	if (!join)
		return (NULL);
	i = 1;
	while (i < argc)
	{
		tmp = join;
		join = ft_strjoin(tmp, argv[i]);
		free(tmp);
		tmp = join;
		if (i < argc - 1)
		{
			join = ft_strjoin(tmp, " ");
			free(tmp);
		}
		i++;
	}
	result = ft_split(join, ' ');
	free(join);
	return (result);
}

int	count_size_of_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

int	*convert_tab_and_free_old(char **tab, int size)
{
	int	i;
	int	*tab_of_int;

	i = 0;
	tab_of_int = malloc(size * sizeof(int));
	if (!tab_of_int)
		return (NULL);
	while (i < size)
	{
		tab_of_int[i] = ft_atoi(tab[i]);
		i++;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (tab_of_int);
}


