/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmendez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:39:32 by jmendez           #+#    #+#             */
/*   Updated: 2023/01/12 17:10:01 by jmendez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	free_tab(char **tab)
{
	int	i;

	i = 0;
	if (tab == NULL)
		return ;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

int	ft_count_nbr(char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (s[i])
	{
		if (s[i] && s[i] == c)
			++j;
		while (s[i] && s[i] == c)
			i++;
		i++;
	}
	free(s);
	return (j);
}

t_list	*convert_arg_into_list(int split, int ac, char **av)
{
	t_list	*list;
	int		i;
	int		nbr;
	int		limit;

	if (split == 1)
		limit = 0;
	else
		limit = 1;
	i = ac - 1;
	if (!av[i])
		return (NULL);
	nbr = ft_atoi(av[i]);
	i--;
	list = initialization(nbr);
	while (limit <= i)
	{
		nbr = ft_atoi(av[i--]);
		insertion(list, nbr);
	}
	if (split == 1)
		list->nb_elem = ac;
	else
		list->nb_elem = ac - 1;
	return (list);
}

int	scroll_str_and_check_if_digit(int ac, char **av, int i, int j)
{
	while (i < ac && av[i] != NULL)
	{
		if (av[i][j] == '-' && ft_strlen(av[i]) == 1)
			return (-1);
		if (av[i][0] == '-')
			j++;
		while (ft_isdigit(av[i][j]) == 1)
			j++;
		if ((int)ft_strlen(av[i]) == j)
		{
			i++;
			j = 0;
		}
		else
			return (-1);
	}
	return (0);
}
