/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 12:34:55 by narajaon          #+#    #+#             */
/*   Updated: 2017/03/20 11:37:31 by narajaon         ###   ########.fr       */
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
		tab[j] = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
		while (NON_SPACES(str[i]))
		{
			tab[j][k] = str[i];
			if (!(str[i + 1]))
				break;
			k++;
			i++;
		}
		j++;
		word--;
	}
	return (tab);
}

int		main()
{
	char **tab;
	char str[] = "  test split	whitespaces\n   2wd";

	tab = (char **)malloc(sizeof(char *) * ft_strlen(str));
	tab = ft_split_whitespaces(str);
	printf("%s ", tab[0]);
	printf("%s ", tab[1]);
	printf("%s ", tab[2]);
	printf("%s", tab[3]);
	return (0);
}
