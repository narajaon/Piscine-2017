/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 10:12:28 by narajaon          #+#    #+#             */
/*   Updated: 2017/03/22 11:22:05 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	i = 0;
	dup = (char *)malloc(sizeof(char) * ft_strlen(src));
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct	s_stock_par *ft_param_to_tab(int ac, char **av)
{
	struct	s_stock_par *params;
	int		temp;

	temp = 0;
	params = (struct s_stock_par *)malloc(sizeof(struct s_stock_par) * (ac + 1));
	if (!params)
		return (0);
	while (temp < ac)
	{
		params[temp].size_param = ft_strlen(av[temp]);
		params[temp].str = av[temp];
		params[temp].copy = ft_strdup(av[temp]);
		params[temp].tab = (char **)malloc(sizeof(char *) * ft_strlen(av[temp]));
		params[temp].tab = ft_split_whitespaces(av[temp]);
		temp++;
	}
	params[temp].str = 0;
	return (params);
}

int		main(int argc, char **argv)
{
	struct s_stock_par *test;

	test = (struct s_stock_par *)malloc(sizeof(struct s_stock_par) * argc);
	test = ft_param_to_tab(argc, argv);
	return (0);
}
