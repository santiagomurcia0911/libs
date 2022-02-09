/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libs.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spena-mu <spena-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 14:50:13 by spena-mu          #+#    #+#             */
/*   Updated: 2022/02/09 17:26:06 by spena-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBS_H
# define LIBS_H

# include <unistd.h>
# include <stdlib.h>

size_t	s_strlen(const char *s);
size_t	s_strlcpy(char *dst, const char *src, size_t dstsize);
int		s_isalpha(int c);
int		s_isdigit(int c);
int		s_isalnum(int c);
int		s_isascii(int c);
int		s_isprint(int c);
int		s_tolower(int c);
int		s_toupper(int c);
size_t	s_strlcat(char *dst, const char *src, size_t dstsize);
void	*s_memset(void *b, int c, size_t len);
void	s_bzero(void *s, size_t n);
void	*s_memchr(const void *s, int c, size_t n);
void	*s_memcpy(void *dst, const void *src, size_t n);
char	*s_strchr(const char *s, int c);
int		s_memcmp(const void *s1, const void *s2, size_t n);
int		s_atoi(const char *str);
int		s_strncmp(const char *s1, const char *s2, size_t n);
char	*s_strnstr(const char *haystack, const char *needle, size_t len);
char	*s_strrchr(const char *s, int c);
void	*s_memmove(void *dst, const void *src, size_t len);
void	*s_calloc(size_t count, size_t size);
char	*s_strdup(const char *s1);
void	s_putchar_fd(char c, int fd);
void	s_putstr_fd(char *s, int fd);
void	s_putendl_fd(char *s, int c);

#endif
