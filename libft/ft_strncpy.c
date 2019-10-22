/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmerrell <gmerrell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 13:18:56 by gmerrell          #+#    #+#             */
/*   Updated: 2019/09/26 17:05:01 by gmerrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t		i;
	size_t		k;

	i = 0;
	k = 0;
	while (i < len)
	{
		while (i < len)
		{
			if (src[k] != '\0')
			{
				dst[i] = src[k];
				k++;
			}
			else
				dst[i] = '\0';
			i++;
		}
	}
	return (dst);
}
