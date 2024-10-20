/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:31:29 by mlaffita          #+#    #+#             */
/*   Updated: 2024/08/27 18:44:11 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 31 || str[i] >= 127)
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
	char chainetest[] = "ajd45hg";
	int result;
	result = ft_str_is_printable(chainetest);
	printf("%d", result);
	return (0);
}
*/
