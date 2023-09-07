/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmekoudi <gmekoudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:14:07 by gmekoudi          #+#    #+#             */
/*   Updated: 2023/09/07 13:08:19 by gmekoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/*int main() 
{
    char str1[] = "bonjour";
    char str2[] = "bom dia";
    
    int result = ft_strncmp(str1, str2, 3);
    
    if (result == 0) {
        printf("Les %d sont identiques.\n", 3);
    } else if (result < 0) {
        printf("Les %d de str1 sont inférieurs à de str2.\n", 3);
    } else {
        printf("Les %d de str1 sont supérieurs à ceux de str2.\n", 3);
    }
    return 0;
}*/
