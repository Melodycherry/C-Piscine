/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:01:03 by mlaffita          #+#    #+#             */
/*   Updated: 2024/09/10 11:41:39 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>

int	*ft_range(int min, int max )
{
	int i;
	int *tab;

	if ( min >= max )
		return (0);
	i = max - min;
	tab = (int *) malloc(sizeof(int) * i);
	if (tab == NULL)
		return (NULL);
	i = 0;
	while ( min < max )
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
#include<stdio.h>
int main ()
{
	int min;
	int max;
	int *tab;
	int i;
	int size;

	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while ( i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}
