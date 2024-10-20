/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:20:23 by mlaffita          #+#    #+#             */
/*   Updated: 2024/08/27 18:36:38 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 64 || str[i] >= 91)
		{	
			return (0);
		}
	i++;
	}
	return (1);
}
/*
#include<stdio.h>
int	main()
{
	char testchaine[]= "qwerty";
	int	result;
	result = ft_str_is_uppercase(testchaine);
	printf("%d", result);
	return (0);
}
*/
