/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denysdudka <denysdudka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:51:48 by denysdudka        #+#    #+#             */
/*   Updated: 2024/10/07 11:32:39 by denysdudka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_separator(char c, char d)
{
	if (c == d)
		return (1);
	return (0);
}

int	word_counter(char const *s, char c)
{
	int	i;
	int	counter;
	int	in_word;

	i = 0;
	counter = 0;
	in_word = 0;
	while (s[i])
	{
		if (!is_separator(s[i], c) && !in_word)
		{
			counter++;
			in_word = 1;
		}
		else if (is_separator(s[i], c))
			in_word = 0;
		i++;
	}
	return (counter);
}

char	*f_split(char const *s, size_t start, size_t end)
{
	char	*result;
	size_t	i;

	i = 0;
	result = malloc(sizeof(char) * (end - start + 1));
	if (!result)
		return (NULL);
	while (start < end)
		result[i++] = s[start++];
	result[i] = '\0';
	return (result);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		start;
	char	**result;
	int		word_index;

	i = 0;
	start = -1;
	word_index = 0;
	result = (char **)malloc(sizeof(char *) * (word_counter(s, c) + 1));
	if (!result)
		return (NULL);
	while (i <= (int)strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || s[i] == '\0') && start >= 0)
		{
			result[word_index++] = f_split(s, start, i);
			start = -1;
		}
		i++;
	}
	result[word_index] = NULL;
	return (result);
}
// int main()
// {
//     int i = 0;
//     char str[] = "The,string,to,be,split.";
//     char **result = ft_split(str, ',');

//     while (result[i])
//     {
//         printf("%s\n", result[i]);
//         free(result[i]);
//         i++;
//     }
//     free(result);
//     return 0;
// }
