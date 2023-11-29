/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 12:41:47 by ddavlety          #+#    #+#             */
/*   Updated: 2023/11/28 19:36:33 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

long	find_newline(char *txt)
{
	long	i;

	i = 0;
	if (!txt)
		return (-1);
	while (txt[i])
	{
		if (txt[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

char	*write_to_buffer(char *txt, char *to_remain)
{
	char	*ptr;

	ptr = ft_strjoin(to_remain, txt);
	free(to_remain);
	return (ptr);
}

char	*clean_the_buffer(char *to_remain)
{
	char	*ptr;

	if (!to_remain)
		return (NULL);
	ptr = ft_substr(to_remain, (find_newline(to_remain) + 1),
			ft_strlen(&to_remain[find_newline(to_remain)]));
	free (to_remain);
	return (ptr);
}

char	*get_next_line(int fd)
{
	char		*txt[1024];
	static char	*to_remain;
	char		*to_return;

	txt[fd] = (char *)malloc(BUFFER_SIZE + 1);
	while (find_newline(to_remain) < 0)
	{
		ft_bzero(txt[fd], BUFFER_SIZE + 1);
		if (read(fd, txt[fd], BUFFER_SIZE) <= 0)
		{
			to_return = ft_substr(to_remain, 0, ft_strlen(to_remain));
			free (to_remain);
			to_remain = NULL;
			free (txt[fd]);
			return (to_return);
		}
		else
			to_remain = write_to_buffer(txt[fd], to_remain);
	}
	to_return = ft_substr(to_remain, 0, find_newline(to_remain) + 1);
	to_remain = clean_the_buffer(to_remain);
	free(txt[fd]);
	return (to_return);
}
