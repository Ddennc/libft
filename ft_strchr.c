/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denysdudka <denysdudka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:54:18 by ddudka            #+#    #+#             */
/*   Updated: 2024/10/07 11:32:45 by denysdudka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	while (*s)
	{
		if (*s == ch)
			return ((char *)s);
		s++;
	}
	if (ch == '\0')
		return ((char *)s);
	return (NULL);
}
// int main()
// {
// 	char str[] = "Find D character";
// 	char *first_D = ft_strchr(str,'D');
// 	char *first_D = strchr(str,'D');
// 	if(first_D == NULL)
// 	printf("There is no 'D' character");
// 	else
// 	printf("%s",first_D);
// }
