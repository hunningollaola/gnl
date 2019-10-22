/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmerrell <gmerrell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 21:02:38 by gmerrell          #+#    #+#             */
/*   Updated: 2019/09/27 14:23:39 by gmerrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char		*p;
	int			i;

	i = 0;
	if (!s || !f)
		return (NULL);
	if (!(p = ft_strnew(ft_strlen(s))))
		return (NULL);
	while (s[i])
	{
		p[i] = f(s[i]);
		i++;
	}
	return (p);
}
