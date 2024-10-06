/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denysdudka <denysdudka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:24:47 by denysdudka        #+#    #+#             */
/*   Updated: 2024/10/06 19:21:58 by denysdudka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = lst;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}
// int main()
// {
// 	t_list *head = ft_lstnew("First");
// 	t_list *second = ft_lstnew("Second");
// 	t_list *third = ft_lstnew("Third");
// 	head->next = second;
// 	second->next = third;
// 	t_list *last = ft_lstlast(head);
// 	if (last)
//         printf("Last node content: %s\n", (char *)last->content);
//     else
//         printf("List is empty.\n");
//     free(third);
//     free(second);
//     free(head);
// 	return 0;
// }