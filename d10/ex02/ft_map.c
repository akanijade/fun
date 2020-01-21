/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkurniaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 22:05:45 by gkurniaw          #+#    #+#             */
/*   Updated: 2020/01/20 22:17:54 by gkurniaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *temp;

	i = 0;
	temp = (int*)malloc(length * 4);
	while (i < length)
	{
		temp[i] = (*f)(tab[i]);
		i++;
	}
	return (temp);
}
