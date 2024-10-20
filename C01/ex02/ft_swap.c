/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:21:47 by mlaffita          #+#    #+#             */
/*   Updated: 2024/08/22 17:10:45 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	change;

	change = *a;
		*a = *b;
		*b = change;
}
/*
int	main()
{
	int x, y;

	x =77;
	y =88;
	printf ("avant %d %d\n", x, y);
	ft_swap(&x, &y);
	printf ("apres %d %d\n", x, y);
}
*/
