/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 12:34:55 by narajaon          #+#    #+#             */
/*   Updated: 2017/03/22 12:57:43 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#define SPACES(x) x == '\n' || x == '\t' || x == ' '
#define NON_SPACES(x) x != '\n' && x != '\t' && x != ' '

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
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

int		ft_wordlen(char *str, int i)
{
	int len;

	len = 0;
	while (NON_SPACES(str[i]))
	{
		len++;
		i++;
	}
	return (len);
}

char	**ft_split_whitespaces(char *str)
{
	char **tab;
	int i;
	int j;
	int k;
	int word;
	int w_len;

	i = 0;
	j = 0;
	k = 0;
	word = ft_countword(str);
	tab = (char **)malloc(sizeof(char *) * word + 1);
	while (word)
	{
		k = 0;
		while (SPACES(str[i]) && str[i])
			i++;
		w_len = ft_wordlen(str, i);
		tab[j] = (char *)malloc(sizeof(char) * w_len);
		while (NON_SPACES(str[i]))
		{
			tab[j][k] = str[i];
			k++;
			i++;
		}
		tab[j][k] = '\0';
		j++;
		word--;
	}
	tab[j] = 0;
	return (tab);
}

int		main(int argc, char **argv)
{
	char **tab;
	char str[] = "				d";
	int j;

	j = 0;
	tab = (char **)malloc(sizeof(char *) * ft_strlen(str));
	tab = ft_split_whitespaces(str);
	while (tab[j])
	{
		printf("%s\n", tab[j]);
		j++;
	}
	return (0);
}
