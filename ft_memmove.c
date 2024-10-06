/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denysdudka <denysdudka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:54:12 by ddudka            #+#    #+#             */
/*   Updated: 2024/10/06 21:12:55 by denysdudka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	if (dst == NULL)
		return (NULL);
	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	i = 0;
	if (d > s)
		while (len-- > 0)
			d[len] = s[len];
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}

// #include<stdio.h>
// int main(){
// 	char s[] = "abcdefghijk";
// 	char s1[] = "abcdefghijk";
// 	memmove(s+2, s,sizeof(char)*9);
// 	ft_memmove(s1+2, s1,sizeof(char)*9);
// 	s[11] = '\0';
// 	s1[11] = '\0';
// 	 printf("%s\n", s);
// 	  printf("%s\n", s1);
// }