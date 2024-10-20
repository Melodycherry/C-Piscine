/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 18:53:17 by mlaffita          #+#    #+#             */
/*   Updated: 2024/08/31 21:17:06 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	s;
	unsigned int	i;

	s = 0;
	i = 0;
	while (src[s] != '\0')
		s++;
	if (size == 0)
		return (s);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	return (s);
}
/*
#include<stdio.h>
int main()
{
	char source[] = "hello world";
	char destination[20];
	unsigned int size;
	unsigned int length;

	size = 20;
	length = ft_strlcpy(destination, source, size);
	printf(" source : %s\n", source);
	printf(" destination : %s\n", destination);
	printf(" longueur source : %u\n", length );
	return (0);
}
*/
