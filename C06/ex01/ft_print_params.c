/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 18:11:08 by mlaffita          #+#    #+#             */
/*   Updated: 2024/09/04 20:23:52 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*
void	ft_putstr( char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str, 1);
		i++;
	}
}
*/
int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			write (1, &argv[j][i], 1);
			i++;
		}	
		write (1, "\n", 1);
		j++;
	}
	return (0);
}
