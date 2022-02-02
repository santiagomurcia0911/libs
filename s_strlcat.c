/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_strlcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spena-mu <spena-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 18:07:29 by spena-mu          #+#    #+#             */
/*   Updated: 2022/02/01 13:45:47 by spena-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs.h"

size_t	s_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	counter;
	size_t	index;

	counter = s_strlen(dst);
	if (dstsize <= counter)
		return (dstsize + s_strlen(src));
	index = 0;
	while (src[index] != '\0' && counter + 1 < dstsize)
	{
		dst[counter] = src[index];
		index++;
		counter++;
	}
	dst[counter] = '\0';
	return (s_strlen(dst) + s_strlen(src));
}
