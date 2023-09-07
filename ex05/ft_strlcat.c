/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmekoudi <gmekoudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:16:10 by gmekoudi          #+#    #+#             */
/*   Updated: 2023/08/31 18:51:51 by gmekoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i += 1;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	desti;
	unsigned int	sourc;

	desti = ft_strlen(dest);
	sourc = ft_strlen(src);
	i = 0;
	if (size == 0 || desti >= size)
	{
		return (size + sourc);
	}
	while (src[i] != '\0' && i < size - desti - 1)
	{
		dest[desti + i] = src[i];
		i++;
	}
	dest[desti + i] = '\0';
	return (sourc + desti);
}
/*int main()
{
    char phrase[60] = "Bonjour, ";
    char str[] = "Ecole 42. Ceci est un test. Isso e uma teste";

    size_t result = ft_strlcat(phrase, str, sizeof(phrase));
    
    printf("Phrase avec rajout: %s\n", phrase);
    printf("taille de la phrase: %zu\n", result);
    
    return 0;
}*/
