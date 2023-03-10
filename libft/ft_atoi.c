/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmendez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 14:10:14 by jmendez           #+#    #+#             */
/*   Updated: 2022/10/24 18:26:32 by jmendez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				i;
	int				sign;
	int				res;

	i = 0;
	res = 0;
	sign = 1;
	while (((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
	{
		if (str[i] == '\0')
			return (0);
		i ++;
	}
	if ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while ((str[i] - '0' >= 0 && str[i] - '0' <= 9) && (str[i] != '\0'))
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
