/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddudka <ddudka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:54:54 by ddudka            #+#    #+#             */
/*   Updated: 2024/09/23 18:09:23 by ddudka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
#include <stdio.h>
#include <ctype.h>

int main()
{

    printf("%d\n", ft_toupper('c'));
    printf("%d\n", toupper('c'));
}