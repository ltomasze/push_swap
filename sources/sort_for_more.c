/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_for_more.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltomasze <ltomasze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:01:12 by ltomasze          #+#    #+#             */
/*   Updated: 2024/09/11 12:21:15 by ltomasze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	calcule_group_size_with_sqrt(int size)
{
	int	i;

	if (size < 4)
		return (1);
	i = 2;
	while (i * i < size)
		i++;
	if (i * i > size)
	{
		if ((i * i - size) < ((i - 1) * (i - 1) + (-size)))
			return (i);
	}
	return (i - 1);
}

void	chunk_sort1(t_stack *stack_a, t_stack *stack_b, int size_a)
{
	int	i;
	int	range;

	i = 0;
	range = calcule_group_size_with_sqrt(size_a) * 14 / 10;
	while (stack_a->top)
	{
		if (stack_a->top->index <= i)
		{
			pb(stack_a, stack_b);
			rb(stack_b);
			i++;
		}
		else if (stack_a->top->index <= i + range)
		{
			pb(stack_a, stack_b);
			i++;
		}
		else
			ra(stack_a);
	}
}
// * 14 / 10 == 1.4  the largest compromise between group size

int	count_r(t_node *stack, int nbr)
{
	int	counter;

	counter = 0;
	while (stack && stack->index != nbr)
	{
		stack = stack->next;
		counter++;
	}
	return (counter);
}

void	rotate_stack_b(t_stack *stack_b, int size_b, int rb_count, int rrb_count)
{
	if (rb_count <= rrb_count)
	{
		while (stack_b->top && stack_b->top->index != size_b - 1)
			rb(stack_b);
	}
	else
	{
		while (stack_b->top && stack_b->top->index != size_b - 1)
			rrb(stack_b);
	}
}

void	chunk_sort2(t_stack *stack_a, t_stack *stack_b, int size_b)
{
	int	rb_count;
	int	rrb_count;

	while (size_b > 0)
	{
		if (stack_b->top == NULL)
			break ;
		rb_count = count_r(stack_b->top, size_b - 1);
		rrb_count = size_b - rb_count;
		rotate_stack_b(stack_b, size_b, rb_count, rrb_count);
		if (stack_b->top)
		{
			pa(stack_a, stack_b);
			size_b--;
		}
	}
}