/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 12:08:35 by mlaffita          #+#    #+#             */
/*   Updated: 2024/09/07 14:55:32 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int	i;

	i = 0;
	while (i < (size - 1))
	{	
		if (tab[i] > tab[i + 1])
		{
			swap = tab[i];
			tab[i] = tab[i + 1];
			tab [i + 1] = swap;
			i = 0;
		}
		else
		i++;
	}
}
/*
#include<stdio.h>
int main()
{
	int tab[] = { 0, 0};
	int size;
	int i;

	size = 2;
	i = 0;
	while ( i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(tab, size);
	i = 0;
	while ( i < size)
    {
		printf("%d", tab[i]);
        i++;
     }
     printf("\n");
}
*/
