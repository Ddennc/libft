/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denysdudka <denysdudka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:54:10 by ddudka            #+#    #+#             */
/*   Updated: 2024/10/07 11:32:09 by denysdudka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
	{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	if (dst == NULL && src == NULL)
		return (NULL);
	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
	// int main(){
	// 	char s[] = "abcdefghijk";
	// 	char d[12];
	// 	char d1[12];
	// 	char e[5];
	// 	char e1[5];
	// 	memcpy(d, s, sizeof(char)*12);
	// 	ft_memcpy(d1, s, sizeof(char)*12);
	// 	memcpy(e, s+3, sizeof(char)*5);
	// 	e[4] = '\0';  
	// 	ft_memcpy(e1, s+3, sizeof(char)*5);
	// 	 e1[4] = '\0';
	// 	printf("%s\n",d);
	// 	printf("%s\n",d1);
	// 	printf("%s\n",e);
	// 	printf("%s\n",e1);
	// 	printf("%s",s);
	// }