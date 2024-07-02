/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltomasze <ltomasze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:54:56 by ltomasze          #+#    #+#             */
/*   Updated: 2024/03/05 13:20:27 by ltomasze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (2048);
	return (0);
}
/*
#include <stdio.h>

int	ft_isdigit(int c);

int	main(void)
{
	printf("%d\n", ft_isdigit('w'));
	return (0);
}
*/
