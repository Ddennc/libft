/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denysdudka <denysdudka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:54:45 by ddudka            #+#    #+#             */
/*   Updated: 2024/10/08 12:13:53 by denysdudka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!haystack || !needle)
		return (NULL);
	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] && (i + j) < len && haystack[i + j] == needle[j])
		{
			j++;
		}
		if (!needle[j])
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
// int main()
// {
// 	char str1[] = "Main sentence in which we search";
// 	char str2[] = "sentence";
// 	char *result1 = strnstr(str1, str2, strlen(str1));
// 	char *result2 = ft_strnstr(str1, str2, strlen(str1));
// 	if (result1 == NULL)
// 		printf("No needle in haystack\n");
// 	else
// 		printf("%s\n", result1);
// 	if (result2 == NULL)
// 		printf("No needle in haystack\n");
// 	else
// 		printf("%s\n", result2);
// }
