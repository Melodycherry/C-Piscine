/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 17:01:53 by mlaffita          #+#    #+#             */
/*   Updated: 2024/08/26 20:47:54 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
		{
			return (0);
		}
	i++;
	}
	return (1);
}
/*
int main()
{
	char *chaine;
	chaine ="hello";
	int verif;
	verif = ft_str_is_alpha(chaine);
	printf( "renvoie %d", verif );
	return (0);
}
*/
