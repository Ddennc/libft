/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denysdudka <denysdudka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:24:49 by denysdudka        #+#    #+#             */
/*   Updated: 2024/10/06 21:14:44 by denysdudka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	void	*new_content;
	t_list	*elem;

	if (!lst || !f)
		return (NULL);
	new = 0;
	while (lst)
	{
		new_content = f(lst->content);
		elem = ft_lstnew(new_content);
		if (!elem)
		{
			del(new_content);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, elem);
		lst = lst->next;
	}
	return (new);
}
