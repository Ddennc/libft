/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denysdudka <denysdudka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:54:15 by ddudka            #+#    #+#             */
/*   Updated: 2024/10/06 19:20:12 by denysdudka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buffer, int c, size_t len)
{
	unsigned char	*tmp_ptr;

	tmp_ptr = (unsigned char *) buffer;
	while (len > 0)
	{
		*(tmp_ptr++) = (unsigned char) c;
		len--;
	}
	return (buffer);
}

// #include <stdio.h>
// int main() {
//     char buffer[10];
//     memset(buffer, 'c', sizeof(char) * 5);
//     ft_memset(buffer + 5, 'd', sizeof(char) * 5);
//     unsigned long i = 0;
//     while (i < sizeof(buffer)) {
//         printf("%c", buffer[i]);
//         i++;
//     }
//     printf("\n");
//}
