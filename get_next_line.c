/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeverqu <mae.verquin@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 13:21:23 by maeverqu          #+#    #+#             */
/*   Updated: 2026/05/13 14:55:16 by maeverqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*line;
	static char	*stash;
	char	buffer[BUFFER_SIZE];

	while (read(fd, buffer, BUFFER_SIZE))
	{
		
	}
}
