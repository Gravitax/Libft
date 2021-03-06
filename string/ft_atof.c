/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 18:05:35 by gedemais          #+#    #+#             */
/*   Updated: 2020/08/10 20:15:53 by maboye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static double	part2(const char *str)
{
	double	res2;
	int		count;

	count = 0;
	res2 = ft_abs(ft_atoi(str));
	while (*str >= '0' && *str <= '9')
	{
		str++;
		count++;
	}
	while (count > 0)
	{
		res2 /= 10;
		count--;
	}
	return (res2);
}

double			ft_atof(const char *str)
{
	double	res;
	double	res1;
	int		count;
	int		neg;

	neg = 1;
	if (*str == '-')
	{
		neg = -1;
		str++;
	}
	count = 0;
	res1 = ft_abs(ft_atoi(str));
	while (*str >= '0' && *str <= '9')
	{
		str++;
		count++;
	}
	if (!*str || *str != '.')
		return (neg * res1);
	str++;
	res = res1 + part2(str);
	return (neg * res);
}
