/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denysdudka <denysdudka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:54:48 by ddudka            #+#    #+#             */
/*   Updated: 2024/10/06 21:12:11 by denysdudka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*res;
	char			cc;

	cc = (char)c;
	res = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			res = (char *)&s[i];
		i++;
	}
	if (s[i] == cc)
		res = (char *)&s[i];
	return (res);
}
// #include<stdio.h>
// int main()
// {
// 	char str[] = "Find D character in D sentence";
// 	char *last_D = ft_strrchr(str,'D');
// 	// char *last_D = strrchr(str,'D');
// 	if(last_D == NULL)
// 	printf("There is no 'D' character");
// 	else
// 	printf("%s",last_D);
// }