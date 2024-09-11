/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltomasze <ltomasze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 09:19:39 by ltomasze          #+#    #+#             */
/*   Updated: 2024/09/11 12:53:08 by ltomasze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_word_count2(char const *str, char c)
{
	int	count;
	int	in_nbr;

	in_nbr = 0;
	count = 0;
	while (*str)
	{
		if (*str != c && in_nbr == 0)
		{
			count++;
			in_nbr = 1;
		}
		else if (*str == c)
			in_nbr = 0;
		str++;
	}
	return (count);
}
/* c is separator, in_nbr is flag*/

void	ft_atoi_error_check(long res, int sign)
{
	if ((sign == 1 && res > INT_MAX) || (sign == -1 && res > (long)INT_MAX + 1))
		ft_error();
}
/*check if number in string is higher than intmax or lower than intmin
(long)INT_MAX + 1 this type casting, because INT_MAX + 1 is beyond int*/

long	char_on_int(const char *nptr, int *i)
{
	long	res;

	res = 0;
	while (nptr[*i] && nptr[*i] >= '0' && nptr[*i] <= '9')
	{
		res = res * 10 + (nptr[*i] - '0');
		(*i)++;
	}
	return (res);
}

int	ft_atoi2(const char *nptr)
{
	int		i;
	int		sign;
	long	res;

	i = 0;
	sign = 1;
	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	if (nptr[i] < '0' || nptr[i] > '9')
		ft_error();
	res = char_on_int(nptr, &i);
	ft_atoi_error_check(res, sign);
	if (nptr[i] != '\0')
		ft_error();
	return ((int)(res * sign));
}
/*return ((int)(res * sign)); because we need int so we need type casting*/

void	free_split(char **split)
{
	int	j;

	j = 0;
	while (split[j])
	{
		free(split[j]);
		j++;
	}
	free(split);
}
