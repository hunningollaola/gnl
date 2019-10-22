/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmerrell <gmerrell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 20:32:34 by gmerrell          #+#    #+#             */
/*   Updated: 2019/09/26 22:00:05 by gmerrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			i;
	size_t			j;
	size_t			k;

	i = 0;
	k = 0;
	if (!*needle)
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i] == needle[j])
		{
			if (!(needle[j + 1]) && i < len)
				return ((char *)&(haystack[i - j]));
			i++;
			j++;
		}
		if (haystack[i] != needle[j])
			k++;
		i = k;
	}
	return (NULL);
}
