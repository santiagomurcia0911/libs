/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libs.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spena-mu <spena-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 14:50:13 by spena-mu          #+#    #+#             */
/*   Updated: 2022/01/29 18:28:01 by spena-mu         ###   ########.fr       */
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
#endif
