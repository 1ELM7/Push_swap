/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmendez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:32:50 by jmendez           #+#    #+#             */
/*   Updated: 2023/01/22 23:11:44 by jmendez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	sort_four(t_list *a, t_list *b)
{
	while (a->first->pos != 0)
		ra(a);
	pb(a, b);
	sort_list(a);
	sort_list_of_three(a, 0, 1, 2);
	pa(a, b);
}

static void	sort_five(t_list *a, t_list *b)
{
	if (a->first->next->next->next->next->pos == 0)
		rra(a);
	while (a->first->pos != 0)
		ra(a);
	pb(a, b);
	while (a->first->pos != 1)
		ra(a);
	pb(a, b);
	sort_list(a);
	sort_list_of_three(a, 0, 1, 2);
	pa(a, b);
	pa(a, b);
}

void	sort_small_stack(t_list *a)
{
	t_list	*b;

	b = malloc(sizeof(t_list));
	if (!b)
		return ;
	sort_list(a);
	if (a->nb_elem == 2)
		sa(a);
	else if (a->nb_elem == 3)
		sort_list_of_three(a, 0, 1, 2);
	else if (a->nb_elem == 4)
		sort_four(a, b);
	else if (a->nb_elem == 5)
		sort_five(a, b);
	sup_all_list(b);
}
