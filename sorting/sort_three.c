/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmendez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:37:22 by jmendez           #+#    #+#             */
/*   Updated: 2023/01/12 17:31:20 by jmendez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	top_is_greater(t_list *a, int smallest)
{
	if (a->first->next->nbr == smallest)
		ra(a);
	else
	{
		ra(a);
		sa(a);
	}
}

void	top_is_median(t_list *a, int smallest)
{
	if (a->first->next->nbr == smallest)
		sa(a);
	else
		rra(a);
}

void	top_is_smallest(t_list *a)
{
	sa(a);
	ra(a);
}

void	sort_list_of_three(t_list *a, int smallest, int median, int greatest)
{
	if (a_is_sorted(a))
		return ;
	if (a->first->nbr == greatest)
		top_is_greater(a, smallest);
	else if (a->first->nbr == median)
		top_is_median(a, smallest);
	else if (a->first->nbr == smallest)
		top_is_smallest(a);
}
