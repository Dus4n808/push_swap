#ifndef PUSH_SWAP
# define PUSH_SWAP
# include <stdlib.h>
# include "libft/libft.h"

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}	t_stack;

//Parsing et check
char	**split_and_join(int argc, char **argv);
int		check_if_is_valid_digit(char **tab);
//Instruction lié aux stacks
void	ft_push_back(t_stack **head, t_stack *new);
void	i_sa(t_stack **a);
void	i_sb(t_stack **b);



#endif
