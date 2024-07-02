/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltomasze <ltomasze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:50:54 by ltomasze          #+#    #+#             */
/*   Updated: 2024/03/05 13:20:45 by ltomasze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (8);
	return (0);
}
/*
#include <stdio.h>

int	ft_isalnum(int c);

int	main(void)
{
	printf("%d\n", ft_isalnum('F'));
	return (0);
}
*/
