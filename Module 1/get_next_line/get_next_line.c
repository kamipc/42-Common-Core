/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-13 14:28:34 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-12-13 14:28:34 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;
	char		*buffer;

	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if(buffer == NULL)
		return (NULL);
	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		free(buffer);
		return (NULL);
	}
	while (fd)
	{
		read(fd, buffer, BUFFER_SIZE);
		stash = store_stash(buffer, stash);
	}
}
static char	*store_stash(char *buffer, char *stash)
{
	if(!stash)
		stash = ft_strdup(buffer);
	else
		stash = ft_strjoin(stash, buffer);
	return (stash);
}
//read(fd, void *buffer, BUFFER_SIZE);