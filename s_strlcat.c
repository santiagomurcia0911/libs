/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_strlcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spena-mu <spena-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 18:07:29 by spena-mu          #+#    #+#             */
/*   Updated: 2022/02/03 14:12:13 by spena-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs.h"

size_t	s_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i1;
	size_t	sd;
	size_t	ss;

	sd = s_strlen(dst);
	ss = s_strlen(src);
	i1 = 0;
	if (dstsize <= sd)
		return (dstsize + ss);
	while (src[i1] != '\0' && sd < (dstsize - 1))
	{
		dst[sd] = src[i1];
		i1++;
		sd++;
	}
	dst[sd] = '\0';
	return (sd + s_strlen(&src[i1]));
}
