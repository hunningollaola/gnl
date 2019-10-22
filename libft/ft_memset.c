/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmerrell <gmerrell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 01:30:21 by gmerrell          #+#    #+#             */
/*   Updated: 2019/09/25 17:00:10 by gmerrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char				*dst;
	unsigned char				sym;
	unsigned int				i;

	i = 0;
	if (len == 0)
		return (b);
	dst = (unsigned char *)b;
	sym = (unsigned char)c;
	while (len > i)
	{
		dst[i] = sym;
		i++;
	}
	return (dst);
}
