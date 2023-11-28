/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 12:41:50 by ddavlety          #+#    #+#             */
/*   Updated: 2023/11/28 15:42:59 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned int	i;

	i = 0;
	if (len <= 0 || ft_strlen(s) <= start || !s)
		return (NULL);
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	char			*ptr;

	i = 0;
	j = ft_strlen(s1) + ft_strlen(s2);
	ptr = (char *)malloc((j + 1) * sizeof(char));
	if (!ptr)
		return (0);
	if (s1)
	{
		while (*s1)
			ptr[i++] = *s1++;
	}
	if (s2)
	{
		while (*s2)
			ptr[i++] = *s2++;
	}
	ptr[i] = '\0';
	return (ptr);
}

size_t	ft_strlen(const char *s)
{
	int	count;

	count = 0;
	if (!s)
		return (0);
	while (s[count])
		count++;
	return (count);
}

void	ft_bzero(void *s, unsigned long n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n != 0)
	{
		n--;
		ptr[n] = '\0';
	}
}
