/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltomasze <ltomasze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 12:37:36 by ltomasze          #+#    #+#             */
/*   Updated: 2024/07/02 11:18:00 by ltomasze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#include"../libft/libft.h"

typedef struct s_node
{
	int	value;
	int index;
	struct s_node *next;	
}	t_node;

typedef struct s_stack
{
	t_node	*top;
	int	size;
}	t_stack;

#endif


