/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddudka <ddudka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:54:40 by ddudka            #+#    #+#             */
/*   Updated: 2024/09/23 17:52:37 by ddudka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_strlen(const char *s)
{
	int	counter;

	counter = 0;
	while (s[counter] != '\0')
		counter++;
	return (counter);
}
#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = " \t  rflfr3 /f33r";

    printf("%d\n", ft_strlen(str));
    printf("%ld\n", strlen(str));
}