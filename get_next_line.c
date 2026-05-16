/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeverqu <mae.verquin@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 13:21:23 by maeverqu          #+#    #+#             */
/*   Updated: 2026/05/16 20:04:52 by maeverqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int read_file(int fd, char **stash)
{
	ssize_t read_byte;
	char buffer[BUFFER_SIZE + 1];
	char *temp;

	read_byte = 1;
	while (read_byte > 0 && !ft_strchr(*stash, '\n'))
	{
		read_byte = read(fd, buffer, BUFFER_SIZE);
		if (read_byte < 0)
			return (free(*stash), 0);
		buffer[read_byte] = '\0';
		temp = *stash;
		*stash = ft_strjoin(temp, buffer);
		free(temp);
	}
	return (1);
}

void	clean_stash(char *stash)
{
	size_t	i;
	size_t	j;

	i = 0;
	while(stash[i] && stash[i] != '\n')
		i++;
	if (stash[i] == '\n')
		i++;
	j = 0;
	while (stash[i])
	{
		stash[j] = stash[i];
		i++;
		j++;
	}
	stash[j] = '\0';
}

char *get_next_line(int fd)
{
	char		*line;
	static char *stash;

	if (stash == NULL)
	{
		stash = malloc(sizeof(char));
		stash[0] = '\0';
		if (!stash)
			return (NULL);
	}
	if (read_file(fd, &stash) == 0)
		return (NULL);
	if (stash[0] == '\0')
	{
		free(stash);
		stash = NULL;
		return (NULL);
	}
	line = get_line(stash);
	clean_stash(stash);
	return (line);
}

// #include "get_next_line.h"
// #include <fcntl.h>
// #include <stdio.h>
// #include <unistd.h>

// int main(void)
// {
// 	int 	fd;
// 	char 	*line;

// 	fd = open("test.txt", O_RDONLY);
// 	if (fd < 0)
// 		return (1);
// 	while ((line = get_next_line(fd)) != NULL)
// 	{
// 		printf("%s", line);
// 		free(line);
// 	}
// 	close(fd);
// 	return (0);
// }
