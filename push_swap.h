/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 13:31:18 by dufama            #+#    #+#             */
/*   Updated: 2025/11/03 19:14:02 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
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
void	free_stack(t_stack *stack);
void	i_pa(t_stack **a, t_stack **b);
void	i_pb(t_stack **a, t_stack **b);
void	i_ra(t_stack **a);
void	i_rrb(t_stack **b);
void	i_rra(t_stack **a);
void	i_sa(t_stack **a);
void	i_sb(t_stack **b);
// Instruction algo
void	put_all_in_negatif(t_stack *a);
int		check_if_is_sort(t_stack *a);
void	normalize_index(t_stack *a);
int		found_max_bits(t_stack *a);
int		stack_size(t_stack *size);
void	check_bits_and_do(t_stack **a, t_stack **b, int i);
void	radix_sort(t_stack **a, t_stack **b);
void	sort_small_1_3(t_stack **a);
void	sort_small_1_4(t_stack **a, t_stack **b);
void	sort_small_5(t_stack **a, t_stack **b);

#endif
