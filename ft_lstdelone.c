/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denysdudka <denysdudka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:24:42 by denysdudka        #+#    #+#             */
/*   Updated: 2024/10/07 11:31:04 by denysdudka       ###   ########.fr       */
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
// int main() {
//     char *str = strdup("Hello, World!");
//     t_list *node = ft_lstnew(str);
//     ft_lstdelone(node, free_content);
// 	printf("String after free:%s",str);
//     return 0;
// }
