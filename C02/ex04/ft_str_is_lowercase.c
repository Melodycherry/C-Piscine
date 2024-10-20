/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:00:50 by mlaffita          #+#    #+#             */
/*   Updated: 2024/08/27 18:20:14 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] <= 96 || str[i] >= 123)
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
	char testchaine[] ="";
	int result;
	result = ft_str_is_lowercase(testchaine);
	printf( "%d", result);
	return (0);
	}
	*/
