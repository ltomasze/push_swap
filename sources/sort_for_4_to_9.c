/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_for_4_to_10.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltomasze <ltomasze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:59:01 by ltomasze          #+#    #+#             */
/*   Updated: 2024/09/11 12:17:07 by ltomasze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_index_for_min_value(t_stack *stack)
{
	int		min_index;
	int		min_value;
	int		current_index;
	t_node	*current;	

	min_index = 0;
	current_index = 0;
	current = stack->top;
	min_value = current->value;
	while (current != NULL)
	{
		if (current->value < min_value)
		{
			min_value = current->value;
			min_index = current_index;
		}
		current = current->next;
		current_index++;
	}
	return (min_index);
}

void	push_min_value_to_b(t_stack *stack_a, t_stack *stack_b)
{
	int	min_index;
	int	rotations;

	min_index = find_index_for_min_value(stack_a);
	if (min_index < stack_a->size / 2)
	{
		rotations = min_index;
		while (rotations-- > 0)
			ra(stack_a);
	}
	else
	{
		rotations = stack_a->size - min_index;
		while (rotations-- > 0)
			rra(stack_a);
	}
	pb(stack_a, stack_b);
}

void	sort_for_4_to_9(t_stack *stack_a, t_stack *stack_b)
{
	while (stack_a->size > 3)
		push_min_value_to_b(stack_a, stack_b);
	sort_small_stack(stack_a);
	while (stack_b->size > 0)
		pa(stack_a, stack_b);
}