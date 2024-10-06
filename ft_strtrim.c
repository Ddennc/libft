/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denysdudka <denysdudka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:51:57 by denysdudka        #+#    #+#             */
/*   Updated: 2024/10/06 19:04:41 by denysdudka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed_str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = strlen(s1);
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	while (end > start && is_in_set(s1[end - 1], set))
		end--;
	trimmed_str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!trimmed_str)
		return (NULL);
	strncpy(trimmed_str, &s1[start], end - start);
	trimmed_str[end - start] = '\0';
	return (trimmed_str);
}
// #include <stdio.h>
// int main()
// {
//     char s1[] = "  Hello World  ";
//     char set[] = " ";
//     char *trimmed = ft_strtrim(s1, set);
// 	printf("Trimmed string: '%s'\n", trimmed);
//     free(trimmed);
// 	return 0;
// }
