/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:27:59 by mlaffita          #+#    #+#             */
/*   Updated: 2024/08/20 19:00:14 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 'z';
	while (letter != 'a' -1)
	{
		write (1, &letter, 1);
	letter--;
	}
}
/*
int main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
*/
