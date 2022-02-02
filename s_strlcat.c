/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_strlcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spena-mu <spena-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 18:07:29 by spena-mu          #+#    #+#             */
/*   Updated: 2022/02/02 17:07:18 by spena-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs.h"

size_t	s_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i1;
	size_t	i2;

	i1 = s_strlen(dst);
	i2 = 0;
	if (dstsize <= i1)
		return (dstsize + s_strlen(src));
	while (src[i2] != '\0' && i1 < (dstsize - 1))
	{
		dst[i1] = src[i2];
		i2++;
		i1++;
	}
	dst[i1] = '\0';
	return (s_strlen(dst) + s_strlen(&src[i2]));
}
