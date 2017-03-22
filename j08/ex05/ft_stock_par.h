/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 13:57:20 by narajaon          #+#    #+#             */
/*   Updated: 2017/03/22 10:06:46 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

# include <stdio.h>
# include <stdlib.h>
# define SPACES(x) x == '\n' || x == '\t' || x == ' '
# define NON_SPACES(x) x != '\n' && x != '\t' && x != ' '

typedef struct s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}				t_stock_par;

void	ft_show_tab(struct s_stock_par *par);
struct s_stock_par	*ft_param_to_tab(int ac, char **av);
void	ft_putchar(char c);
char	**ft_split_whitespaces(char *str);

#endif
