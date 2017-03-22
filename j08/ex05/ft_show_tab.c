/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 14:06:47 by narajaon          #+#    #+#             */
/*   Updated: 2017/03/21 19:36:48 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void ft_putnbr(int nb)
{
	int temp;

	temp = 0;
	if (nb == -2147483648)
	{
		nb = nb / 10;
		temp = 8;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else if (nb <= 9 && nb >= 0)
		ft_putchar(nb % 10 + '0');
	if (temp != 0)
		ft_putchar(temp + '0');
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_print_words_tables(char **tab)
{
	int i;
	int j;

	i = 0;	
	j = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			ft_putchar(tab[i][j]);
			j++;
		}
		if (!(tab[i]))
			break;
		else
			ft_putchar('\n');
		i++;
	}
}
