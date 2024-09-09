/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltomasze <ltomasze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:05:18 by ltomasze          #+#    #+#             */
/*   Updated: 2024/08/11 18:59:04 by ltomasze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void ra(t_stack *stack_a)
{
	t_node *first;
	t_node *last;

	first = stack_a->top;
	last = stack_a->top;
	while (last->next != NULL)
	{
		last = last->next;
	}
	stack_a->top = first->next;
	first->next = NULL;
	last->next = first;
	write(1, "ra\n", 3);
}

void rb(t_stack *stack_b)
{
	t_node *first;
	t_node *last;
	first = stack_b->top;
	last = stack_b->top;
	if(stack_b->top == NULL)
		return;
	if(stack_b->top && stack_b->top->next)
	{
		while(last->next != NULL)
		{
			last = last->next;
		}
		stack_b->top = first->next;
		first->next = NULL;
		last->next = first;
	}
	write(1, "rb\n", 3);
}

void rr(t_stack *stack_a, t_stack *stack_b)
{
	ra(stack_a);
	rb(stack_b);
	write(1, "rr\n", 3);
}