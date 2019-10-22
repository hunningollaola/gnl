/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmerrell <gmerrell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 00:57:59 by gmerrell          #+#    #+#             */
/*   Updated: 2019/09/28 01:22:20 by gmerrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	unsigned int		i;
	char const			*str;

	i = 0;
	if (s)
	{
		str = (char *)s;
		while (str[i])
		{
			ft_putchar_fd(s[i], fd);
			i++;
		}
	}
}
