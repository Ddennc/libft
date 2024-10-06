/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denysdudka <denysdudka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:51:45 by denysdudka        #+#    #+#             */
/*   Updated: 2024/10/06 19:22:36 by denysdudka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	write(fd, str, ft_strlen(str));
}
// #include <stdio.h>
// int main() {
//     char str[] = "ABCDE";
//     ft_putstr_fd(str, 1);
//     ft_putstr_fd(str, 2);
//      return 0;
// }