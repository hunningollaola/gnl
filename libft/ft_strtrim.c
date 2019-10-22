/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmerrell <gmerrell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 13:56:01 by gmerrell          #+#    #+#             */
/*   Updated: 2019/09/27 22:45:47 by gmerrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t				i;
	size_t				len;
	char				*str;
	unsigned int		c;

	i = 0;
	c = 0;
	if (s == NULL)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (!s[i])
		return (ft_strdup(""));
	len = ft_strlen(s) - 1;
	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
		len--;
	if (len == 0 && i == 0)
		return (ft_strdup(s));
	str = ft_strnew(len - i + 1);
	if (str == NULL)
		return (NULL);
	while (i <= len)
		str[c++] = s[i++];
	str[c] = '\0';
	return (str);
}
