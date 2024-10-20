/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:35:51 by mlaffita          #+#    #+#             */
/*   Updated: 2024/08/31 15:26:59 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
	{	
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include<stdio.h>
int main()
{
	char chaine1[] = "hello";
	char chaine2[] = "hell!";
	int number ;

	number = 6;
	ft_strncmp(chaine1, chaine2, number);
	printf("%d", ft_strncmp(chaine1, chaine2, number));
	return (0);
}
*/
