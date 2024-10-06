/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denysdudka <denysdudka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:53:47 by ddudka            #+#    #+#             */
/*   Updated: 2024/10/06 19:02:00 by denysdudka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	unsigned long	i;

	i = 0;
	tmp = malloc (count * size);
	if (!tmp)
		return (NULL);
	while (i < size * count)
	{
		tmp[i] = 0;
		i++;
	}
	return ((void *)tmp);
}
// #include<stdio.h>
// int main()
// {
// 	int counter1;
// 	int counter2;
// 	counter1 = 0;
// 	counter2 = 0;
// 	int *array1 = calloc(10,sizeof(int));
// 	int *array2 = ft_calloc(10,sizeof(int));
// 	while(counter1 < 10)
// 	{
// 		printf("%d\n",array1[counter1]);
// 		counter1++;
// 	}
// 	printf("My function\n");
// 	while(counter2 < 10)
// 	{
// 		printf("%d\n",array2[counter2]);
// 		counter2++;
// 	}
// 	free(array1);
// 	free(array2);
// }