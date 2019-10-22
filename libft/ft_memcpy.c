/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmerrell <gmerrell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 19:01:31 by gmerrell          #+#    #+#             */
/*   Updated: 2019/09/28 19:12:11 by gmerrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char				*str1;
	unsigned char				*str2;
	size_t						i;

	i = 0;
	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	if (n == 0 || dst == src)
		return (str1);
	while (n > i)
	{
		str1[i] = str2[i];
		i++;
	}
	return (str1);
}
