/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denysdudka <denysdudka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:24:51 by denysdudka        #+#    #+#             */
/*   Updated: 2024/10/06 19:03:15 by denysdudka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->content = content;
	elem->next = NULL;
	return (elem);
}
// int main()
// {
//     char *data = "Hello, list!";
//     t_list *new_node = ft_lstnew(data);

//     if (new_node)
//     {
//         printf("Content: %s\n", (char *)new_node->content);
//         free(new_node);
//     }
//     return 0;
// }