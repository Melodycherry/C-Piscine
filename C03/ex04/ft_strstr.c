/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:57:34 by mlaffita          #+#    #+#             */
/*   Updated: 2024/08/31 17:25:58 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}	
	while (str[i] != '\0')
	{
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
	j = 0;
	i ++;
	}
	return (0);
}
/*
#include<stdio.h>
int	main()
{
	char chaine[] = " chaine avec un mot a trouver";
	char mot[] = "mot";
	printf("%s", ft_strstr(chaine, mot));
	return (0);
}
*/
