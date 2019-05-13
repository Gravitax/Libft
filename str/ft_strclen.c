/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 12:36:05 by maboye            #+#    #+#             */
/*   Updated: 2019/05/13 12:36:58 by maboye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strclen(const char *str, char c)
{
	int		i;

	i = -1;
	while (str && str[++i])
		if (str[i] == c)
			return (i);
	return (0);
}
