/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_swap&push.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltomasze <ltomasze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 11:13:17 by ltomasze          #+#    #+#             */
/*   Updated: 2024/07/02 18:07:49 by ltomasze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void sa(t_stack *stack_a)
{
	int	temp;
	t_node *first;
	t_node *second;

	first = stack_a->top;
	second = stack_a->top->next;
	if(stack_a->top != NULL && stack_a->top->next != NULL)
	{
		temp = first->value;
		first->value = second->value;
		second->value = temp;
	}
	print_operation("sa");
}

void sb(t_stack *stack_b)
{
	int	temp;
	t_node *first;
	t_node *second;

	first = stack_b->top;
	second = stack_b->top->next;
	if(stack_b->top != NULL && stack_b->top->next != NULL)
	{
		temp = first->value;
		first->value = second->value;
		second->value = temp;
	}
	print_operation("sb");
}

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	t_node *temp;
	temp = stack_b->top;
	if(stack_b->top == NULL)
		return;
	stack_b->top = stack_b->top->next;
	temp->next = stack_a->top;
	stack_a->top = temp;
	stack_b->size--;
	stack_a->size++;
	print_operation("pa");
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	t_node *temp;
	temp = stack_a->top;
	if(stack_a->top != NULL)
	{
		stack_a->top = stack_a->top->next;
		temp->next = stack_b->top;
		stack_b->top = temp;
		stack_a->size--;
		stack_b->size++;
	}
	print_operation("pb");
}