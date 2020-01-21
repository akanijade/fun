/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkurniaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 22:45:39 by gkurniaw          #+#    #+#             */
/*   Updated: 2020/01/20 22:49:42 by gkurniaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int(*f)(char*))
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (tab[i] != 0)
	{
		if ((*f)(tab[i]) == 1)
			j++;
		i++;
	}
	return (j);
}