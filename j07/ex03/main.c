/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 14:05:30 by narajaon          #+#    #+#             */
/*   Updated: 2017/03/17 12:11:23 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strdup(char *src);
int		*ft_range(int min, int max);
int		ft_ultimate_range(int **range, int min, int max);
int		ft_ultimate_range(int **range, int min, int max);
char	*ft_concat_params(int argc, char **argv);

int		main()
{
	char str[] = "test test";
	char *str2;
	int **ptr;
	int i;
	int j;

	i = 0;
	//printf("%s", ft_strdup(str));
	//printf("%d", ft_ultimate_range(ptr, 3, 10));
	return (0);
}
