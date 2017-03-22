/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 14:05:30 by narajaon          #+#    #+#             */
/*   Updated: 2017/03/16 15:17:12 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strdup(char *src);
int		*ft_range(int min, int max);

int		main()
{
	char str[] = "test test";
	char *str2;
	int *ptr;
	int i;

	i = 0;
	//printf("%s", ft_strdup(str));
	ptr = ft_range(3, 10);
	while (ptr[i])
	{
		printf("%d\n", ptr[i]);
		i++;
	}
	return (0);
}
