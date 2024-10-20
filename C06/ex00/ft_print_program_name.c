/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:53:23 by mlaffita          #+#    #+#             */
/*   Updated: 2024/09/04 20:19:55 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	char	*prog;

	prog = argv[0];
	i = 0;
	if (argc > 1)
		return (0);
	while (prog[i] != '\0')
	{
		write (1, &prog[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
