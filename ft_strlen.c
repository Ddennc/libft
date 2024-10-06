/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denysdudka <denysdudka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:54:40 by ddudka            #+#    #+#             */
/*   Updated: 2024/10/06 19:04:23 by denysdudka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	counter;

	counter = 0;
	while (s[counter] != '\0')
		counter++;
	return (counter);
}
// #include <stdio.h>
// int main()
// {
//     char str[] = " \t  rflfr3 /f33r";

//     printf("%zu\n", ft_strlen(str));
//     printf("%zu\n", strlen(str));
// }