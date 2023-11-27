/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 12:41:47 by ddavlety          #+#    #+#             */
/*   Updated: 2023/11/27 12:29:06 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*write_to_buffer(char* txt, size_t buf_size)
{
	char	*buffer;
	size_t	i;

	buffer = (char *)malloc((buf_size + 1) * sizeof (char));
	if (!buffer)
		return (0);
	while (i <= buf_size)
	{
		buffer[i] = txt[i];
		i++;
	}
	return (buffer);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned int	i;

	i = 0;
	if (len <= 0 || ft_strlen(s) <= start)
	{
		ptr = (char *)malloc(1 * sizeof(char));
		*ptr = '\0';
		return (ptr);
	}
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (0);
	while (s[start] && len > 0)
	{
		ptr[i++] = s[start++];
		len--;
	}
	ptr[i] = '\0';
	return (ptr);
}

if (chunk[i] != '\n' || chunk[i] != '\0')
	chunk = write_to_buffer(txt, BUFFER_SIZE);
else


char	*get_next_line(int fd)
{
	char	txt[BUFFER_SIZE];
	char	*chunk;
	char	*to_return;

	if (read(fd, txt, BUFFER_SIZE) <= 0)
		return (NULL);
	chunk = write_to_buffer(txt, BUFFER_SIZE);
	to_return =
}
