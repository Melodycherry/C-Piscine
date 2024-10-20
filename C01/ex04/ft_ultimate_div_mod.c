/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:40:55 by mlaffita          #+#    #+#             */
/*   Updated: 2024/08/23 12:02:11 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = tmp / *b;
	*b = tmp % *b;
}
/*
int	main()
{
	int x;
	int y;

	x = 11;
	y = 2;
	printf ("avant x= %d, y=%d\n", x, y );
	ft_ultimate_div_mod(&x, &y);
	printf ("apres division =%d, modulo =%d", x, y );
}
*/
