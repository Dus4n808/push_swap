#ifndef PUSH_SWAP
# define PUSH_SWAP
# include <stdlib.h>
# include "libft/libft.h"

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}	t_stack;

void	ft_push_back(t_stack **head, t_stack *new);
void	i_sa(t_stack **a);
void	i_sb(t_stack **b);


#endif
