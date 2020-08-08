/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:46:18 by maboye            #+#    #+#             */
/*   Updated: 2020/08/08 18:24:22 by maboye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char			*ft_strcat(char *dst, const char *src)
{
	if (!dst || !src)
		return (NULL);
	ft_strcpy(&dst[ft_strlen(dst)], src);
	return (dst);
}