/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denysdudka <denysdudka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:24:37 by denysdudka        #+#    #+#             */
/*   Updated: 2024/10/07 11:30:43 by denysdudka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// t_list	*ft_lstnew(void *content)
// {
// 	t_list	*elem;

// 	elem = malloc(sizeof(t_list));
// 	if (!elem)
// 		return (NULL);
// 	elem->content = content;
// 	elem->next = NULL;
// 	return (elem);
// }

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
// int main()
// {
//     t_list *head = ft_lstnew("Second");
//     t_list *new_node = ft_lstnew("First");
// 	ft_lstadd_front(&head, new_node);
//     t_list *temp = head;
//     while (temp)
//     {
//         printf("Content: %s\n", (char *)temp->content);
//         temp = temp->next;
//     }
// 	t_list *current = head;
//     t_list *next_node;
//     while (current)
//     {
//         next_node = current->next;
//         free(current);
//         current = next_node;
//     }
// 	return 0;
// }