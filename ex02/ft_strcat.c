/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmekoudi <gmekoudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:14:17 by gmekoudi          #+#    #+#             */
/*   Updated: 2023/08/31 18:13:21 by gmekoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (dest[size] != '\0')
		size++;
	while (src[i] != '\0')
	{
		dest[size + i] = src[i];
		i++;
	}
	dest[size + i] = '\0';
	return (dest);
}
/*int main()
{
    char str1[30] = "Hello, le ";
    char str2[] = "monde";
    
    ft_strcat(str1, str2);
    
    printf("%s\n", str1); // Affiche "Hello, le world!"
    
    return 0;
}*/