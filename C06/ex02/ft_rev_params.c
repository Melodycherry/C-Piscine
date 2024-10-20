/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 19:16:16 by mlaffita          #+#    #+#             */
/*   Updated: 2024/09/04 20:26:28 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main( int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j != argc -1)
	{
		j++;
	}
	while (j > 0)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			write (1, &argv[j][i], 1);
			i++;
		}	
		write (1, "\n", 1);
		j--;
	}
	return (0);
}
