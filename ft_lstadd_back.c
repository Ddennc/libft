/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denysdudka <denysdudka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:24:34 by denysdudka        #+#    #+#             */
/*   Updated: 2024/10/07 11:27:52 by denysdudka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = ft_lstlast(*lst);
	if (!last)
		*lst = new;
	else
		last->next = new;
}
// int main()
// {
//     t_list *head = ft_lstnew("First");
//     t_list *new_node = ft_lstnew("Second");
// 	ft_lstadd_back(&head, new_node);
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