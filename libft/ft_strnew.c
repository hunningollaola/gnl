/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmerrell <gmerrell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 17:58:14 by gmerrell          #+#    #+#             */
/*   Updated: 2019/09/24 18:48:20 by gmerrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *p;

	if (size + 1 < size)
		return (NULL);
	if (!(p = ft_memalloc(size + 1)))
		return (NULL);
	while (*p)
		ft_memset(p, 0, size + 1);
	return (p);
}
