/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 20:17:38 by mlaffita          #+#    #+#             */
/*   Updated: 2024/08/20 21:23:23 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{	
	char	negative_char;
	char	positive_char;

	negative_char = 'N';
	positive_char = 'P';
	if (n < 0)
	{
		write (1, &negative_char, 1);
	}	
	else
	{
		write (1, &positive_char, 1);
	}
}
/*
int main()
{
	ft_is_negative(8);
	return (0);
}
*/
