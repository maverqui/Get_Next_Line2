/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeverqu <mae.verquin@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 13:16:53 by maeverqu          #+#    #+#             */
/*   Updated: 2026/05/16 19:14:10 by maeverqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>

char	*ft_strchr(const char *s, char c);
char	*ft_strjoin(const char *s1, const char *s2);
int		ft_strlen(char *str);
char	*get_line(char const *s);
int		read_file(int fd, char **stash);
void	clean_stash(char *stash);
char	*get_next_line(int fd);

#endif
