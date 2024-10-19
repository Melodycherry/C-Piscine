/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:06:04 by mlaffita          #+#    #+#             */
/*   Updated: 2024/08/21 10:21:22 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	number;

	number = '0';
	while (number != '9' +1)
	{
		write (1, &number, 1);
		number++;
	}
}
/*
int main()
	{
	ft_print_numbers();
	return (0);
	}
*/
