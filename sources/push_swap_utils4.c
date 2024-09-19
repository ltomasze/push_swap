/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils4.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltomasze <ltomasze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:57:44 by ltomasze          #+#    #+#             */
/*   Updated: 2024/09/19 10:38:39 by ltomasze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	initialize_nbrs_array(int argc, char **argv, int **nbrs, int *nbr_nbrs)
{
	if (argc == 2)
		*nbr_nbrs = ft_word_count2(argv[1], ' ');
	else
		*nbr_nbrs = argc - 1;
	if (argc == 1)
		exit(1);
	*nbrs = (int *)malloc((*nbr_nbrs) * sizeof(int));
	if (!(*nbrs))
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
