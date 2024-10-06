/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denysdudka <denysdudka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:24:42 by denysdudka        #+#    #+#             */
/*   Updated: 2024/10/06 19:02:56 by denysdudka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void free_content(void *content) {
//     free(content);
// }
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
// t_list *ft_lstnew(void *content) {
//     t_list *elem = malloc(sizeof(t_list));
//     if (!elem) return NULL;
//     elem->content = content;
//     elem->next = NULL;
//     return elem;
// }
// int main() {
//     char *str = strdup("Hello, World!");
//     t_list *node = ft_lstnew(str);
//     ft_lstdelone(node, free_content);
// 	printf("String after free:%s",str);
//     return 0;
// }
