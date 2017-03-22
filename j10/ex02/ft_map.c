/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 14:59:09 by narajaon          #+#    #+#             */
/*   Updated: 2017/03/22 15:14:51 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *res;

	i = 0;
	res = (int *)malloc(sizeof(int) * length);
	while (length)
	{
		res[i] = f(tab[i]);
		length--;
		i++;
	}
	return (res);
}
