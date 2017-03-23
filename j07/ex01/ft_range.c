/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 14:56:42 by narajaon          #+#    #+#             */
/*   Updated: 2017/03/16 15:17:49 by narajaon         ###   ########.fr       */
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
