/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmekoudi <gmekoudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:15:03 by gmekoudi          #+#    #+#             */
/*   Updated: 2023/09/07 13:14:13 by gmekoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i_str;
	int	i_find;
	int	length;

	length = ft_strlen(to_find);
	if (length == 0)
		return (str);
	i_str = 0;
	i_find = 0;
	while (str[i_str] != '\0')
	{
		if (str[i_str] == to_find[i_find])
			i_find++;
		else
			i_find = 0;
		i_str++;
		if (i_find == length)
			return (&str[i_str - i_find]);
	}
	return (0);
}
/*int main()
{
    char str[] = "Bonjour! Ecole 42 Sao Paulo";
    char substring[] = "42";

    char *result = ft_strstr(str, substring);
    
    if (result != NULL) {
        printf("Une sous-chaine trouver: %ld\n", result - str);
    } else {
        printf("Aucune sous chaine trouver\n");
    }
    
    return 0;
}*/