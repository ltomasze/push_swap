/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltomasze <ltomasze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 09:40:21 by ltomasze          #+#    #+#             */
/*   Updated: 2024/09/17 15:03:50 by ltomasze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	split_atol_free(char *str, int *nbrs)
{
	char	**parts_str;
	int		i;

	parts_str = ft_split(str, ' ');
	if (!parts_str)
		ft_error();
	i = 0;
	while (parts_str[i])
	{
		check_number_in_str(parts_str, nbrs, i);
		i++;
	}
	free_split(parts_str);
}

int	allocate_memory_for_stacks(t_stack **stack_a, t_stack **stack_b)
{
	*stack_a = (t_stack *)malloc(sizeof(t_stack));
	*stack_b = (t_stack *)malloc(sizeof(t_stack));
	if (*stack_a == NULL || *stack_b == NULL)
		return (-1);
	(*stack_a)->top = NULL;
	(*stack_b)->top = NULL;
	(*stack_a)->size = 0;
	(*stack_b)->size = 0;
	return (0);
}
/* we have top for null anf size for 0, because we prepare memory
 for stack A and B but for the start we have empty stack*/

void	free_stack(t_stack *stack)
{
	t_node	*current;
	t_node	*next;

	current = stack->top;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	free(stack);
}

int	ft_check_forbidden_char(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (EXIT_FAILURE);
		i++;
	}
	return (EXIT_SUCCESS);
}

int	fill_nbrs_array(int argc, char **argv, int *nbrs)
{
	int		i;
	long	nbr;

	i = 0;
	if (argc > 2)
	{
		while (i < argc - 1)
		{
			if (ft_check_forbidden_char(argv[i]) == EXIT_FAILURE)
				ft_error();
			nbr = (int)ft_atol(argv[i + 1]);
			if (ft_check_int_range(nbr) == 0)
				ft_error();
			if (nbr == -1 && argv[i + 1][0] != '-')
				ft_error();
			nbrs[i] = nbr;
			i++;
		}
	}
	else if (argc == 2)
		split_atol_free(argv[1], nbrs);
	else
		ft_error();
	return (0);
}
