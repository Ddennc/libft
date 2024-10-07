/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denysdudka <denysdudka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:54:03 by ddudka            #+#    #+#             */
/*   Updated: 2024/10/07 11:32:01 by denysdudka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ch;

	str = (unsigned char *)s;
	ch = (unsigned char)c;
	while (n > 0)
	{
		if (*str == ch)
			return (str);
		str++;
		n--;
	}
	return (NULL);
}
// int main()
// {
// 	char str[] = "Find symbol S in string";
// 	int nmb[] = {1,2,3,4,5};
// 	char *result1 = memchr(str,'S',strlen(str));
// 	char *result2 = ft_memchr(str,'S',strlen(str));
// 	int *result3 = memchr(nmb,3,sizeof(nmb));
// 	int *result4 = ft_memchr(nmb,3,sizeof(nmb));
// 	if(result1 == NULL)
// 	printf("No character in string");
// 	else 
// 	printf("%s\n",result1);
// 	if(result2 == NULL)
// 	printf("No character in string");
// 	else 
// 	printf("%s\n",result2);
// 	if (result3 == NULL)
// 		printf("No number 3 found in array (memchr)\n");
// 	else 
// 		printf("memchr found number 3 at index %ld\n", result3 - nmb);

// 	if (result4 == NULL)
// 		printf("No number 3 found in array (ft_memchr)\n");
// 	else 
// 		printf("ft_memchr found number 3 at index %ld\n", result4 - nmb);
// }