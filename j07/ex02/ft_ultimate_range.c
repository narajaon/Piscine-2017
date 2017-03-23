/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 15:20:01 by narajaon          #+#    #+#             */
/*   Updated: 2017/03/17 12:08:05 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *ptr;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	ptr = (int *)malloc(sizeof(int) * max - min);
	while (min < max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int		ft_ultimate_range(int **range, int min, int max)
{
	int *ptr;

	ptr = ft_range(min, max);
	range = &ptr;
	return (max - min);
}
