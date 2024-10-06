/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denysdudka <denysdudka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:54:23 by ddudka            #+#    #+#             */
/*   Updated: 2024/10/06 19:35:54 by denysdudka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int			i;
	char		*tmp_ptr;

	i = 0;
	tmp_ptr = malloc (sizeof(char) * ft_strlen(s1)+1);
	if (!tmp_ptr)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		tmp_ptr[i] = s1[i];
		i++;
	}
	tmp_ptr[i] = '\0';
	return (tmp_ptr);
}
// #include<stdio.h>
// int main()
// {
// 	char str[] = "First string";
// 	char *dest1 = strdup(str);
// 	char *dest2 = ft_strdup(str);
// 	if(dest1 == NULL)
// 	printf("NULLL");
// 	else
// 	printf("%s dest1\n",dest1);
// 	if(dest2 == NULL)
// 	printf("NULLL");
// 	else
// 	printf("%s dest2\n",dest2);
// }