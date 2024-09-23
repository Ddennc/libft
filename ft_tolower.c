/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddudka <ddudka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:54:51 by ddudka            #+#    #+#             */
/*   Updated: 2024/09/23 18:14:04 by ddudka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
#include <stdio.h>
#include <ctype.h>

int main()
{

    printf("%d\n", ft_tolower('C'));
    printf("%d\n", tolower('C'));
}