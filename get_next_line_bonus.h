/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 12:41:43 by ddavlety          #+#    #+#             */
/*   Updated: 2023/11/28 19:36:35 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <unistd.h>
# include <stdlib.h>
# include <bits/resource.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*ft_substr(char const *s, unsigned int start, size_t len);

void	ft_bzero(void *s, unsigned long n);

char	*ft_strjoin(char const *s1, char const *s2);

size_t	ft_strlen(const char *s);

long	find_newline(char *txt);

char	*write_to_buffer(char *txt, char *to_remain);

char	*clean_the_buffer(char *to_remain);

char	*get_next_line(int fd);

#endif
