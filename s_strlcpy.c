/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spena-mu <spena-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 14:05:52 by spena-mu          #+#    #+#             */
/*   Updated: 2022/02/03 13:38:08 by spena-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs.h"

size_t	s_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i1;
	size_t	i2;

	i1 = 0;
	i2 = 0;
	while (src[i1] != '\0')
		i1++;
	if (dstsize != 0)
	{
		while (src[i2] != '\0' && i2 < (dstsize - 1))
		{
			dst[i2] = src[i2];
			i2++;
		}
		dst[i2] = '\0';
	}
	return (i1);
}
