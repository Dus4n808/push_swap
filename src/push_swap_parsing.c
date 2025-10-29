#include "push_swap.h"

char	**split_and_join(int argc, char **argv)
{
	char	**result;
	char	*join;
	char	*tmp;
	int	i;

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
			if (!(ft_isdigit(tab[i][j]) ||
					(tab[i][j] == '-' && j == 0 && tab[i][j + 1] != '\0')))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	count_size_of_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

void	convert_tab_and_free_old(char **tab, int *tab_of_int, int size)
{
	int	i;

	i = 0;
	tab_of_int = malloc(size * sizeof(int));
	if (!tab)
		return ;
	while (i < size)
	{
		tab_of_int[i] = ft_atoi(tab[i]);
		i++;
	}
	free(tab);
}
