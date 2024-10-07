/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denysdudka <denysdudka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:53:44 by ddudka            #+#    #+#             */
/*   Updated: 2024/10/07 11:28:18 by denysdudka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *buffer, size_t n)
{
	unsigned char	*tmp_ptr;

	tmp_ptr = (unsigned char *) buffer;
	while (n > 0)
	{
		*(tmp_ptr++) = 0;
		n--;
	}
}

// int main() {
//     char buffer[10];
//     ft_bzero(buffer,sizeof(char)*5);
//     bzero(buffer+5, sizeof(char)*5);
//     unsigned long i = 0;
//     while ( i < sizeof(buffer)) {
//         printf("%d ", buffer[i]); 
//         i++;
//     }
//     return 0;
// }