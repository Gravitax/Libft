/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ishexa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 11:53:31 by maboye            #+#    #+#             */
/*   Updated: 2020/08/08 16:26:55 by maboye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

bool			ft_ishexa(int c)
{
	return (ft_isdigit(c)
			|| (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F'));
}
