/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:45:40 by maboye            #+#    #+#             */
/*   Updated: 2020/08/08 16:25:37 by maboye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

bool			ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}