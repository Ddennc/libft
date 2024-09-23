/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddudka <ddudka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:53:41 by ddudka            #+#    #+#             */
/*   Updated: 2024/09/23 18:42:19 by ddudka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>

int whitespaces(char *str, int *ptr_i) {
    int count = 0; 
    int i = 0;

   
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32) {
        i++;
    }

    *ptr_i = i; 
    return count; 
}

int ft_atoi(char *str) {
    int result = 0;
    int i = 0;

  
    whitespaces(str, &i);
    
    
    while (str[i] && str[i] >= '0' && str[i] <= '9') {
        result *= 10;
        result += str[i] - '0'; 
        i++;
    }

    return result;
}

int main(void) {
    char *s = "   01235506789ab567";
    printf("%d\n", ft_atoi(s)); 
    printf("%d\n", atoi(s));     
    return 0;
}
