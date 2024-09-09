/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltomasze <ltomasze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 11:34:38 by ltomasze          #+#    #+#             */
/*   Updated: 2024/09/07 13:02:36 by ltomasze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	initialize_stack(int argc, char **argv, t_stack **stack_a, t_stack **stack_b)
{
	int	*nbrs;
	int	nbr_nbrs;
	int	i;

	initialize_nbrs_array(argc, argv, &nbrs, &nbr_nbrs);
	if (allocate_memory_for_stacks(stack_a, stack_b) == -1)
	{
		free(nbrs);
		ft_error();
	}
	i = nbr_nbrs - 1;
	while (i >= 0)
		create_new_node_for_top(*stack_a, nbrs[i--]);
	free(nbrs);
	index_assigmenent(*stack_a);
	return (0);
}
/*nbr_nbrs number how many we have numbers in array
i = nbr_nbrs - 1 because when we have 5 nbr, we have i == 0 ...  i == 4*/
