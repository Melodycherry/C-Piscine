/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:23:32 by mlaffita          #+#    #+#             */
/*   Updated: 2024/08/22 17:39:09 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main()
{
	int x;
	int y;
	int div;
	int mod;

	x = 11;
	y = 2;
	printf("x =%d , y =%d", x, y );
	ft_div_mod(x, y, &div, &mod);
	printf("div =%d, mod =%d", div, mod);	
}
*/
