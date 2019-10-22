/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmerrell <gmerrell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 20:21:07 by gmerrell          #+#    #+#             */
/*   Updated: 2019/10/22 16:46:11 by gmerrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

static char				*embrace_words(char *line, char *words, char *buff, char *buff_tmp)
{
	char	*tmp;
	int		i;

	i = 0;
	if ((tmp = (char *)malloc(sizeof(char) * (ft_strlen(buff) - ft_strlen(buff_tmp)))))
		while ((ft_strlen(buff) - ft_strlen(buff_tmp) >= i))
		{
			*tmp++ = *buff++;
			i++;
		}
		ft_strjoin(line, tmp);
		return (line);
	return (NULL);
}

static t_memory			*check_fd(t_memory **head, int fd)
{
	t_memory    *temp;
	t_memory	*copy;

	temp = *head;
	
	while (temp && (fd != temp->fd_stored))
		temp = temp->next;
	if (temp && (fd = temp->fd_stored))
		return (temp);
	else 
	{
		temp = (t_memory *)malloc(sizeof(t_memory));
		temp->fd_stored = fd;
		temp->next = NULL;
		temp->words_stored = ft_strnew(0);
		copy = *head;
		temp->next = copy;
		*head = temp;
		return (*head);
	}
	return (NULL);
}

int						get_next_line(const int fd, char **line)
{
	 char 				buff[BUFF_SIZE + 1];
	 static t_memory    *head;
	 t_memory           *current;
	 char               *buff_tmp;
	 ssize_t			number;

	 if (fd < 0 || read(fd, buff, 0) < 0 || !line)
		return (-1);
	current = check_fd(&head, fd);
	printf("yu byl v check fd\n");
	while ((number = read(fd, buff, BUFF_SIZE)))
	{
		buff[number] = '\0';
		buff_tmp = buff;
		if (!(buff_tmp = ft_strchr(buff_tmp, '\n')))
		{
			ft_strjoin(current->words_stored, buff);
			printf("In struckt: %s|\n", current->words_stored);
			printf("buff: %s\n", buff);
		}
		if (!(buff_tmp = ft_strchr(buff_tmp, '\n')))
		{
			if(embrace_words(*line, current->words_stored, buff, buff_tmp))
			{
				free(current->words_stored);
				buff_tmp++;
				ft_strjoin(current->words_stored, buff_tmp);
				return (1);
			}
			return (-1);
		}
		return (1);
	}
	return (0);
}
