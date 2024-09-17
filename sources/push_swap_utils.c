/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltomasze <ltomasze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 11:49:02 by ltomasze          #+#    #+#             */
/*   Updated: 2024/09/17 12:59:44 by ltomasze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_error(void)
{
	write (2, "Error\n", 6);
	exit(1);
}
/*exit because when we have error we end program*/

int	check_duplicates(int *nbr, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
		{
			if (nbr[i] == nbr[j])
			{
				return (-1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	create_new_node_for_top(t_stack *stack, int value)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (new_node == NULL)
		return (-1);
	new_node->value = value;
	new_node->index = -1;
	new_node->next = stack->top;
	stack->top = new_node;
	stack->size++;
	return (0);
}
/* function for create new node on the top in stack when we use operation push
new_node->index = -1 because stack now is not sort and the first index is 0
so new node top have -1*/

void	index_assigmenent(t_stack *stack)
{
	t_node	*current;
	t_node	*checker;
	int		index;

	current = stack->top;
	while (current)
	{
		index = 0;
		checker = stack->top;
		while (checker)
		{
			if (checker->value < current->value)
				index++;
			checker = checker->next;
		}
		current->index = index;
		current = current->next;
	}
}
/*function for creating number of index node by value from the smallest number,
not sort!,
when checker find small value then current have high index +1*/

int	check_sorted_in_stack(t_stack *stack)
{
	t_node	*current;

	current = stack->top;
	if (stack->top == NULL || stack->top->next == NULL)
		return (1);
	while (current->next != NULL)
	{
		if (current->value > current->next->value)
			return (0);
		current = current->next;
	}
	return (1);
}
