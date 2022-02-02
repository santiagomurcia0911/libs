/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spena-mu <spena-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 14:05:52 by spena-mu          #+#    #+#             */
/*   Updated: 2022/02/02 14:31:55 by spena-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs.h"

size_t	s_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	counter;
	size_t	index;

	counter = 0;
	index = 0;
	while (src[counter] != '\0')
		counter++;
	if (dstsize != 0)
	{
		while (src[index] != '\0' && index < (dstsize - 1))
		{
			dst[index] = src[index];
			index++;
		}
		dst[index] = '\0';
	}
	return (counter);
}
