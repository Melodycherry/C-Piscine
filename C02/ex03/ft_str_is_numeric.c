/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 20:42:54 by mlaffita          #+#    #+#             */
/*   Updated: 2024/08/27 18:02:37 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 47 || str[i] >= 58)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include<stdio.h>
int main()
{
	char	chainetest[]= "12345";
	int verif;
	verif = ft_str_is_numeric(chainetest);
	ft_str_is_numeric(chainetest);
	printf("%d", verif);
	return (0);	
}
*/
