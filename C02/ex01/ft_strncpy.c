/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:16:04 by mlaffita          #+#    #+#             */
/*   Updated: 2024/08/27 16:08:02 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
	dest[i] = src[i];
	i++;
	}
	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}		
	return (dest);
}
/*
#include<stdio.h>
int	main()
{
	char desti[] = "hihih";
	char source[] = "hello";
	unsigned	int nbr;
	nbr = 4;
	ft_strncpy(desti, source, nbr);
	printf("destination = %s", desti);
	return (0);
}
*/
