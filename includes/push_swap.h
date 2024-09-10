/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltomasze <ltomasze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 12:37:36 by ltomasze          #+#    #+#             */
/*   Updated: 2024/09/10 17:55:32 by ltomasze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include"../libft/libft.h"
#include <unistd.h>
#include <limits.h>

typedef struct s_node
{
	int	value;
	int index;
	struct s_node *next;	
}	t_node;

typedef struct s_stack
{
	t_node	*top;
	int	size;
}	t_stack;

void	sa(t_stack *stack_a);
void	sb(t_stack *stack_b);
void	pa(t_stack *stack_a, t_stack *stack_b);
void	pb(t_stack *stack_a, t_stack *stack_b);
void	ra(t_stack *stack_a);
void	rb(t_stack *stack_b);
void	rr(t_stack *stack_a, t_stack *stack_b);
void	rra(t_stack *stack_a);
void	rrb(t_stack *stack_b);
void	rrr(t_stack *stack_a, t_stack *stack_b);
void	ft_error(void);
void	index_assigmenent(t_stack *stack);
void	free_split(char **split);
void	split_atoi2_free(char *str, int *nbrs);
void	initialize_nbrs_array(int argc, char **argv, int **nbrs, int *nbr_nbrs);
void	sort_3_nbr(t_stack **stack, int a, int b, int c);
void	sort_3_nbr_on_stack(t_stack **stack);
void	sort_small_stack(t_stack *stack);
void	push_min_value_to_b(t_stack *stack_a, t_stack *stack_b);
void	sort_for_4_to_10(t_stack *stack_a, t_stack *stack_b);
void	chunk_sort1(t_stack *stack_a, t_stack *stack_b, int size_a);
void	rotate_stack_b(t_stack *stack_b, int size_b, int rb_count, int rrb_count);
void	chunk_sort2(t_stack *stack_a, t_stack *stack_b, int size_b);
int	check_duplicates(int *nbr, int len);
int	create_new_node_for_top(t_stack *stack, int value);
int	check_sorted_in_stack(t_stack *stack);
int	ft_word_count2(char const *str, char c);
int	ft_atoi2(const char *nptr);
int	allocate_memory_for_stacks(t_stack **stack_a, t_stack **stack_b);
int	fill_nbrs_array(int argc, char **argv, int *nbrs);
int	initialize_stack(int argc, char **argv, t_stack **stack_a, t_stack **stack_b);
int	find_index_for_min_value(t_stack *stack);
int	calcule_group_size_with_sqrt(int size);
int	count_r(t_node *stack, int nbr);
long	char_on_int(const char *nptr, int *i);
#endif


