/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denysdudka <denysdudka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:24:54 by denysdudka        #+#    #+#             */
/*   Updated: 2024/10/06 19:22:09 by denysdudka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list		*tmp;
	int			counter;

	tmp = lst;
	counter = 0;
	while (tmp)
	{
		tmp = tmp->next;
		counter++;
	}
	return (counter);
}
// int main()
// {
//     t_list *head = ft_lstnew("First");
//     t_list *second = ft_lstnew("Second");
//     t_list *third = ft_lstnew("Third");
//     head->next = second;
//     second->next = third;
//     int size = ft_lstsize(head);
//     printf("Number of nodes in the list: %d\n", size);
//     free(third);
//     free(second);
//     free(head);
// 	return 0;
// }