/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_rrotate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltomasze <ltomasze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 17:01:17 by ltomasze          #+#    #+#             */
/*   Updated: 2024/08/11 19:00:31 by ltomasze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void rra(t_stack *stack_a)
{
	t_node *prev;
	t_node *current;
	prev = NULL;
	current = stack_a->top;
	if (stack_a->top != NULL && stack_a->top->next != NULL)
	{
		while (current->next != NULL)
		{
			prev = current;
			current = current->next;
		}
		if (prev == NULL)
			return;
		prev->next = NULL;
		current->next = stack_a->top;
		stack_a->top = current;
	}
	write(1, "rra\n", 4);
}

void rrb(t_stack *stack_b)
{
	t_node *prev;
	t_node *current;
	prev = NULL;
	current = stack_b->top;
	if (stack_b->top == NULL || stack_b->top->next == NULL)
		return;
	while (current->next != NULL)
	{
		prev = current;
		current = current->next;
	}
	if (prev != NULL)
		prev->next = NULL;
	current->next = stack_b->top;
	stack_b->top = current;
	write(1, "rrb\n", 4);
}

void rrr(t_stack *stack_a, t_stack *stack_b)
{
	rra(stack_a);
	rrb(stack_b);
	write(1, "rrr\n", 4);
}
