/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denysdudka <denysdudka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:54:07 by ddudka            #+#    #+#             */
/*   Updated: 2024/10/06 19:03:29 by denysdudka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	while (n > 0)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
		n--;
	}
	return (0);
}
// #include<stdio.h>
// int main()
// {
//     char str1[] = "This is the way";
//     char str2[] = "This is the way.";
// 	int nmb1[] = {1,2,3,4,5};
// 	int nmb2[] = {1,3,3,4,5};
// 	if(ft_memcmp(str1,str2,17) == 0)
//     printf("Arrays are equal\n");
//     else if(ft_memcmp(str1,str2,17) > 0)
//     printf("Array str1 is bigger\n");
//     else
//     printf("Array str2 is bigger\n");
//     if(memcmp(str1,str2,17) == 0)
//     printf("Arrays are equal\n");
//     else if(memcmp(str1,str2,17) > 0)
//     printf("Array str1 is bigger\n");
//     else
//     printf("Array str2 is bigger\n");
// 	if(ft_memcmp(nmb1,nmb2,5) == 0)
//     printf("Arrays are equal\n");
//     else if(ft_memcmp(nmb1,nmb2,5) > 0)
//     printf("Array nmb1is bigger\n");
//     else
//     printf("Array nmb2 is bigger\n");
//     if(memcmp(nmb1,nmb2,5) == 0)
//     printf("Arrays are equal\n");
//     else if(memcmp(nmb1,nmb2,5) > 0)
//     printf("Array nmb1 is bigger\n");
//     else
//     printf("Array nmb2 is bigger\n");
// }