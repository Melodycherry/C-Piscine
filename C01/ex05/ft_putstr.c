/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testvrac.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 18:07:39 by mlaffita          #+#    #+#             */
/*   Updated: 2024/08/26 11:56:02 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*
int main(void)
{
    ft_putstr("coucou");
	return (0);
}
*/
