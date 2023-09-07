/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmekoudi <gmekoudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:14:25 by gmekoudi          #+#    #+#             */
/*   Updated: 2023/08/31 17:38:13 by gmekoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				size;

	i = 0;
	size = 0;
	while (dest[size] != '\0')
	{
		size++;
	}
	while (nb > i && src[i] != '\0')
	{
		dest[size + i] = src[i];
		i++;
	}
	dest[size + i] = '\0';
	return (dest);
}
/*int main() 
{
    char str1[20] = "Hello, ";
    char str2[] = "world!";
    
    ft_strncat(str1, str2, 4);
    
    printf("%s\n", str1); // Affiche "Hello, worl"
    
    return 0;
}*/