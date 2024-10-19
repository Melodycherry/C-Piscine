/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:43:19 by mlaffita          #+#    #+#             */
/*   Updated: 2024/08/20 18:52:19 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';
	while (letter != 'z' +1)
	{
		write(1, &letter, 1);
		letter++;
	}
}
	/*
	int main()
	{
	ft_print_alphabet();
	return (0);	
	}
	*/
