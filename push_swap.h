#ifndef PUSH_SWAP
# define PUSH_SWAP
# include <stdlib.h>
# include "libft/libft.h"
# include <limits.h>

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}	t_stack;

//Parsing et check
char	**split_and_join(int argc, char **argv);
int		check_if_is_valid_digit(char **tab);
int		*convert_tab_and_free_old(char **tab, int size);
int		count_size_of_tab(char **tab);
int		check_duplicate(int *tab, int size);
int		check_overflow(char **tab);
//Instruction lié aux stacks
void	ft_push_back(t_stack **stack, t_stack *new);
void	fill_the_stack(int *tab, int size, t_stack **a);
void	i_pa(t_stack **a, t_stack **b);
void	i_pb(t_stack **a, t_stack **b);
void	i_ra(t_stack **a);
// Instruction algo
void	put_all_in_negatif(t_stack *a);
void	normalize_index(t_stack *a);
// int		found_max_bits(t_stack *a);
// void	radix_sort(t_stack **a, t_stack **b);




#endif
