/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_for_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltomasze <ltomasze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 13:03:30 by ltomasze          #+#    #+#             */
/*   Updated: 2024/09/10 15:09:30 by ltomasze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_3_nbr(t_stack **stack, int a, int b, int c)
{
	if (a > b && a > c && b < c)
		ra(*stack);
	else if (a > b && b > c && a > c)
	{
		ra(*stack);
		sa(*stack);
	}
	else if (a > b && b < c && a < c)
		sa(*stack);
	else if (a < b && a < c && b > c)
	{
		rra(*stack);
		sa(*stack);
	}
	else if (a < b && a > c && b > c)
		rra(*stack);
}

void	sort_3_nbr_on_stack(t_stack **stack)
{
	int		a;
	int		b;
	int		c;
	t_node	*node;

	node = (*stack)->top;
	a = node->value;
	b = node->next->value;
	c = node->next->next->value;
	sort_3_nbr(stack, a, b, c);
}

void	sort_small_stack(t_stack *stack)
{
	if (stack->size == 2)
	{
		if (stack->top->value < stack->top->next->value)
		{
			sa(stack);
		}
	}
	else if (stack->size == 3)
		sort_3_nbr_on_stack(&stack);
}