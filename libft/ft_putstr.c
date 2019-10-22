/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmerrell <gmerrell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 23:00:22 by gmerrell          #+#    #+#             */
/*   Updated: 2019/09/27 23:11:17 by gmerrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	unsigned int	i;
	unsigned char	*str;

	i = 0;
	if (s)
	{
		str = (unsigned char *)s;
		while (str[i])
		{
			ft_putchar(s[i]);
			i++;
		}
	}
}
