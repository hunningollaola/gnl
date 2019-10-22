/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmerrell <gmerrell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 21:16:25 by gmerrell          #+#    #+#             */
/*   Updated: 2019/09/26 19:56:52 by gmerrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	b;
	size_t			a;

	b = (unsigned char)c;
	a = ft_strlen(s);
	while (a && s[a] != b)
		a--;
	if (s[a] == b)
		return ((char *)&s[a]);
	return (NULL);
}
