/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltomasze <ltomasze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 09:40:21 by ltomasze          #+#    #+#             */
/*   Updated: 2024/09/11 13:27:16 by ltomasze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	split_atoi2_free(char *str, int *nbrs)
{
	char	**parts_str;
	int		i;
	int		nbr;

	parts_str = ft_split(str, ' ');
	if (!parts_str)
		ft_error();
	i = 0;
	while (parts_str[i])
	{
		nbr = ft_atoi2(parts_str[i]);
		if (nbr == -1
			&& (parts_str[i][0] != '-' || ft_atoi2(&parts_str[i][1]) != 0))
		{
			free_split(parts_str);
			ft_error();
		}
		nbrs[i++] = nbr;
	}
	free_split(parts_str);
}
/*(nbr == -1 && (parts_str[i][0] != '-' || ft_atoi2(&parts_str[i][1]) != 0))
 we check is -1 is error
because if in index 0 == - and index 1 == 0 
this error because we have wrong number -0 */

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

int	fill_nbrs_array(int argc, char **argv, int *nbrs)
{
	int		i;
	int		nbr;

	i = 0;
	if (argc > 2)
	{
		while (i < argc - 1)
		{
			nbr = ft_atoi2(argv[i + 1]);
			if (nbr == -1 && argv[i + 1][0] != '-')
				ft_error();
			else if (nbr == -1 && ft_atoi2(&argv[i + 1][1]) != 0)
				ft_error();
			nbrs[i] = nbr;
			i++;
		}
	}
	else if (argc == 2)
		split_atoi2_free(argv[1], nbrs);
	else
		ft_error();
	return (0);
}

void	initialize_nbrs_array(int argc, char **argv, int **nbrs, int *nbr_nbrs)
{
	if (argc == 2)
		*nbr_nbrs = ft_word_count2(argv[1], ' ');
	else
		*nbr_nbrs = argc - 1;
	*nbrs = (int *)malloc(*nbr_nbrs * sizeof(int));
	if (*nbrs == NULL)
		ft_error();
	if (fill_nbrs_array(argc, argv, *nbrs) == -1)
	{
		free(*nbrs);
		ft_error();
	}
	if (check_duplicates(*nbrs, *nbr_nbrs))
	{
		free(*nbrs);
		ft_error();
	}
}
