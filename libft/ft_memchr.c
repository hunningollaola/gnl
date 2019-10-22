/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmerrell <gmerrell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 18:10:39 by gmerrell          #+#    #+#             */
/*   Updated: 2019/09/25 18:31:13 by gmerrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char				sym;
	size_t						i;
	unsigned char				*str;

	i = 0;
	sym = (unsigned char)c;
	str = (unsigned char *)s;
	while (n > i)
	{
		if (*str == sym)
			return (str);
		str++;
		i++;
	}
	return (0);
}
