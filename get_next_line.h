/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmerrell <gmerrell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 19:51:23 by gmerrell          #+#    #+#             */
/*   Updated: 2019/10/22 16:33:28 by gmerrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE
# define BUFF_SIZE 9
# include <fcntl.h>
# include <sys/types.h>
# include "libft/libft.h"

typedef	struct			s_memory{
	char				*words_stored;
	size_t				fd_stored;
	struct s_memory		*next;
}						t_memory;

int	get_next_line(const int fd, char **line);

#endif
