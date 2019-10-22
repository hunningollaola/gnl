/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmerrell <gmerrell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 20:15:47 by gmerrell          #+#    #+#             */
/*   Updated: 2019/09/26 17:57:15 by gmerrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (dst[i])
		i++;
	while (src[j])
		j++;
	if (size <= i)
		return (j + size);
	while (src[k] && (i + 1 < size))
	{
		dst[i] = src[k];
		k++;
		i++;
	}
	dst[i] = '\0';
	return ((i - k) + j);
}
