/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denysdudka <denysdudka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:51:59 by denysdudka        #+#    #+#             */
/*   Updated: 2024/10/07 11:33:55 by denysdudka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	counter;
	char	*subs;

	s_len = ft_strlen(s);
	counter = 0 ;
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	subs = (char *) malloc(sizeof(char) * len + 1);
	if (!subs)
		return (NULL);
	while (counter < len)
	{
		subs[counter] = s[start + counter];
		counter++;
	}
	subs[counter] = '\0';
	return (subs);
}
// int main()
// {
//     char src[] = "The string from which to create the substring";
//     char *subs = ft_substr(src,0,strlen(src));
//     printf("%s\n",subs);
//     free(subs);
// }