/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:24:12 by mlaffita          #+#    #+#             */
/*   Updated: 2024/09/10 10:56:52 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>

int ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] !='\0')
		len++;
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i =0;
	while ( src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char *dest;

	dest = (char *) malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}

#include<stdio.h>
int main ()
{
	char	*chaine_src;
	char *chaine_dest;

	chaine_src = "hello";
	chaine_dest = ft_strdup(chaine_src);
	printf("%s",chaine_dest);
   return (0);	
}
