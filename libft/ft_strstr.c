/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmerrell <gmerrell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 13:33:42 by gmerrell          #+#    #+#             */
/*   Updated: 2019/09/26 20:32:03 by gmerrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int				i;
	size_t			j;
	int				k;

	i = 0;
	k = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 0;
		while (haystack[i] == needle[j])
		{
			if (!(needle[j + 1]))
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
