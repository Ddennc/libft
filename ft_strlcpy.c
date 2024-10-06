/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denysdudka <denysdudka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:54:30 by ddudka            #+#    #+#             */
/*   Updated: 2024/10/06 19:04:19 by denysdudka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize != 0)
	{
		while (i < dstsize - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	i = strlen(src);
	return (i);
}
//  #include <stdio.h>
// int main() {
//     char src[] = "Hello, World!";
//     char dst[15]; 

//     size_t copied = ft_strlcpy(dst, src, 14);
//     size_t copied2 = strlcpy(dst,src,14);
//     printf("%s\n", dst);
//     printf("%zu\n", copied2); 
//     printf("%zu\n", copied); 
//     printf("%zu\n", strlen(dst)); 
//     return 0;
// }
