/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltomasze <ltomasze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:10:01 by ltomasze          #+#    #+#             */
/*   Updated: 2024/03/04 10:58:35 by ltomasze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[50] = "This is string.h library function";
	printf("%s\n", str);
	ft_memset(str, '$', 5);
	puts(str);

	test_ft_memset();
	return (0);
}

void test_ft_memset(){
    // Test ft_memset    printf("Testing ft_memset:\n");
        // Array of integers
    int intArray[5];    
	ft_memset(intArray, 0, sizeof(intArray));
    printf("Integers after memset: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", intArray[i]);
    }
    printf("\n");
    // Array of characters
    char charArray[10];
    ft_memset(charArray, 'A', sizeof(charArray));
    printf("Characters after memset: %s\n", charArray);
    // Array of floats
    float floatArray[3];
    ft_memset(floatArray, 0, sizeof(floatArray));
    printf("Floats after memset: ");
    for (int i = 0; i < 3; i++) {
        printf("%f ", floatArray[i]);
    }
    printf("\n");
    // Array of doubles
    double doubleArray[2];
    ft_memset(doubleArray, 1, sizeof(doubleArray));
    printf("Doubles after memset: ");
    for (int i = 0; i < 2; i++) {
        printf("%f ", doubleArray[i]);
    }
    printf("\n");
    // Array of pointers
    int* ptrArray[4];
    ft_memset(ptrArray, 0, sizeof(ptrArray));
    printf("Pointers after memset: ");
    for (int i = 0; i < 4; i++) {
        printf("%p ", (void*)ptrArray[i]);
    }
    printf("\n");
}
*/