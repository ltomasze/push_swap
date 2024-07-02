/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltomasze <ltomasze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 17:57:11 by ltomasze          #+#    #+#             */
/*   Updated: 2024/03/10 18:08:02 by ltomasze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s1;
	size_t	i;

	i = ft_strlen(s);
	s1 = (char *)malloc(i * sizeof(char) + 1);
	if (s1 == NULL)
		return (0);
	ft_memcpy (s1, s, i);
	s1[i] = '\0';
	return (s1);
}
