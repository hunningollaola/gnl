/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmerrell <gmerrell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 20:26:52 by gmerrell          #+#    #+#             */
/*   Updated: 2019/09/26 19:43:00 by gmerrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	b;
	char			*d;

	b = (unsigned char)c;
	d = (char *)s;
	while (*d)
	{
		if (*d == b)
			return (d);
		d++;
	}
	if (!b)
		return (d);
	return (NULL);
}
