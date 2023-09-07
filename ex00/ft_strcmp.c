/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmekoudi <gmekoudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:13:57 by gmekoudi          #+#    #+#             */
/*   Updated: 2023/08/31 17:24:32 by gmekoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i += 1;
	}
	return (s1[i] - s2[i]);
}
/*int main() {
    char str1[] = "Bonjour ecole 42";
    char str2[] = "bonjour Ecole 42";
    
    int result = ft_strcmp(str1, str2);
    
    if (result == 0) {
        printf("Les chaînes sont égales.\n");
    } else if (result < 0) {
        printf("str1 est inférieure à str2.\n");
    } else {
        printf("str1 est supérieure à str2.\n");
    }
    
    return 0;
}*/