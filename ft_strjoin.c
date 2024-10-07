/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denysdudka <denysdudka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:51:52 by denysdudka        #+#    #+#             */
/*   Updated: 2024/10/07 11:33:08 by denysdudka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int			i;
	int			j;
	char		*result;
	int			size1;
	int			size2;

	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	result = (char *) malloc(sizeof(char) * (size1 + size2) + 1);
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		result[j++] = s1[i++];
	}
	i = 0;
	while (s2[i])
	{
		result[j++] = s2[i++];
	}
	result[j] = '\0';
	return (result);
}
// int main()
// {
// 	char str1[] = "Prefix and ";
// 	char str2[] = "Suffix";
// 	char *result = ft_strjoin(str1,str2);
// 	printf("%s\n",result);
// 	free(result);
// }