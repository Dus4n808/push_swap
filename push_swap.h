#ifndef PUSH_SWAP
# define PUSH_SWAP
# include <stdlib.h>
# include "libft/libft.h"

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}	t_stack;

void	i_sa(t_stack **a);


#endif
