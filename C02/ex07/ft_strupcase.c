/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:45:47 by mlaffita          #+#    #+#             */
/*   Updated: 2024/08/27 19:55:41 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{	
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*#include<stdio.h>
int	main()
{
	char testchaine[]= "coucou";
	printf("avant:  %s", testchaine);
	ft_strupcase(testchaine);
	printf("apres :%s", testchaine);
	return (0);
}*/
