/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denysdudka <denysdudka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:51:41 by denysdudka        #+#    #+#             */
/*   Updated: 2024/10/07 21:10:57 by denysdudka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *str, int fd)
{
	write(fd, str, ft_strlen(str));
	write(fd, "\n", 1);
}
// int main() {
//     char str[] = "ABCDE";
//     ft_putendl_fd(str, 1);
//     ft_putendl_fd(str, 2);
//      return 0;
// }