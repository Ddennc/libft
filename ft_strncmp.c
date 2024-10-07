/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denysdudka <denysdudka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:54:43 by ddudka            #+#    #+#             */
/*   Updated: 2024/10/07 11:33:37 by denysdudka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
// int main()
// {
//     char str1[] = "This is the way";
//     char str2[] = "This is the way.";
// 	if(ft_strncmp(str1,str2,17) == 0)
//     printf("Strings are equal\n");
//     else if(ft_strncmp(str1,str2,17) > 0)
//     printf("String s1 is bigger\n");
//     else
//     printf("String s2 is bigger\n");
//     if(strncmp(str1,str2,17) == 0)
//     printf("Strings are equal\n");
//     else if(strncmp(str1,str2,17) > 0)
//     printf("String s1 is bigger\n");
//     else
//     printf("String s2 is bigger\n");
// }