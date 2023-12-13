/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccouble <ccouble@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:39:50 by ccouble           #+#    #+#             */
/*   Updated: 2023/12/13 17:40:09 by ccouble          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <sys/types.h>

typedef struct s_buffer
{
	char	buf[BUFFER_SIZE];
	ssize_t	start;
	ssize_t	end;
}	t_buffer;

typedef struct s_line
{
	char	*line;
	size_t	len;
	size_t	allocated;
}	t_line;

void	init_line(t_line *line);
int		add_str_to_line(t_line *line, char *s, size_t n);
char	*finish_line(t_line *line);
char	*get_next_line(int fd);

#endif
