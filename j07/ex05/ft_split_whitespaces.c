/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 12:34:55 by narajaon          #+#    #+#             */
/*   Updated: 2017/03/21 19:07:37 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#define SPACES(x) x == '\n' || x == '\t' || x == ' '
#define NON_SPACES(x) x != '\n' && x != '\t' && x != ' '
#include <unistd.h>

void	ft_print_words_tables(char **tab);

void	ft_putchar2(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_putstr2(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar2(str[i]);
		i++;
	}
}

int		ft_countword(char *str)
{
	int i;
	int wd;

	i = 0;
	wd = 0;
	while (str[i])
	{
		if (NON_SPACES(str[i]))
			wd++;
		while ((NON_SPACES(str[i])) && (str[i + 1]))
			i++;
		i++;
	}
	return (wd);
}

char	**ft_split_whitespaces(char *str)
{
	char **tab;
	int i;
	int j;
	int k;
	int word;

	i = 0;
	j = 0;
	k = 0;
	word = ft_countword(str);
	tab = (char **)malloc(sizeof(char *) * ft_strlen(str) + 1);
	while (word)
	{
		k = 0;
		while (SPACES(str[i]))
			i++;
		tab[j] = (char *)malloc(sizeof(char) * ft_strlen(str));
		while (NON_SPACES(str[i]))
		{
			tab[j][k] = str[i];
			k++;
			i++;
		}
		tab[j][i] = 0;
		j++;
		word--;
	}
	return (tab);
}

int		main()
{
	char **tab;
	char str[] = "abc abc";
	int i;

	i = 0;
	tab = (char **)malloc(sizeof(char *) * ft_strlen(str));
	tab = ft_split_whitespaces(str);
	ft_print_words_tables(tab);
	return (0);
}
