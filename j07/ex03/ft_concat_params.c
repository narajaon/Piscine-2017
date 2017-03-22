/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 12:08:51 by narajaon          #+#    #+#             */
/*   Updated: 2017/03/18 12:21:54 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strconc(char *str, char **argv)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			*str = argv[i][j];
			str++;
			j++;
		}
		if (!(argv[i + 1]))
			break;
		*str = '\n';
		str++;
		i++;
	}
	*str = '\0';
	return (str);
}

char	*ft_concat_params(int argc, char **argv)
{
	int i;
	int len;
	char *str;

	i = 1;
	len = 0;
	while (argv[i])
	{
		len = len + ft_strlen(argv[i]);
		i++;
	}
	str = (char *)malloc(sizeof(char) * len);
	ft_strconc(str, argv);
	return (str);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		return (0);
	printf("%s", ft_concat_params(argc, argv));
	return (0);
}
