/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farpacik <farpacik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:52:25 by farpacik          #+#    #+#             */
/*   Updated: 2022/12/15 13:52:26 by farpacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*ft_moveline(char *string);
char	*ft_save(char *string);
char	*ft_read_and_save(int fd, char *string);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strchr(char *str);
size_t	ftt_strlen(const char *str);
#endif
