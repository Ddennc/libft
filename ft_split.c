/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denysdudka <denysdudka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:51:48 by denysdudka        #+#    #+#             */
/*   Updated: 2024/10/07 22:54:27 by denysdudka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	safe_malloc(char **token_v, int position, size_t buffer)
{
	int		i;

	i = 0;
	token_v[position] = malloc(buffer);
	if (NULL == token_v[position])
	{
		while (i < position)
			free(token_v[i++]);
		free(token_v);
		return (1);
	}
	return (0);
}

int	fill(char **token_v, char const *s, char delimeter)
{
	size_t	len;
	int		i;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s == delimeter && *s)
			++s;
		while (*s != delimeter && *s)
		{
			++len;
			++s;
		}
		if (len)
		{
			if (safe_malloc(token_v, i, len + 1))
				return (1);
			ft_strlcpy(token_v[i], s - len, len + 1);
		}
		++i;
	}
	return (0);
}

size_t	count_tokens(char const *s, char delimeter)
{
	size_t	tokens;
	int		inside_token;

	tokens = 0;
	while (*s)
	{
		inside_token = 0;
		while (*s == delimeter && *s)
			++s;
		while (*s != delimeter && *s)
		{
			if (!inside_token)
			{
				++tokens;
				inside_token = 42;
			}
			++s;
		}
	}
	return (tokens);
}

char	**ft_split(char const *s, char c)
{
	size_t	tokens;
	char	**token_v;

	if (NULL == s)
		return (NULL);
	tokens = 0;
	tokens = count_tokens(s, c);
	token_v = malloc((tokens + 1) * sizeof(char *));
	if (NULL == token_v)
		return (NULL);
	token_v[tokens] = NULL;
	if (fill(token_v, s, c))
		return (NULL);
	return (token_v);
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
