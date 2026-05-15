/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeverqu <maeverqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 13:16:53 by maeverqu          #+#    #+#             */
/*   Updated: 2026/05/15 17:39:39 by maeverqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>

char	*ft_strchr(const char *s, char c);
char	*ft_strjoin(const char *s1, const char *s2);
int		ft_strlen(char *str);
char	*get_line(char const *s);
int		read_file(int fd, char **stash);
char	*clean_stash(char **stash, char *line);
char	*get_next_line(int fd);

#endif
