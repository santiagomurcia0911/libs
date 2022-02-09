/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_memmove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spena-mu <spena-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:01:39 by spena-mu          #+#    #+#             */
/*   Updated: 2022/02/09 15:43:34 by spena-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs.h"

void	*s_memmove(void *dst, const void *src, size_t len)
{
	size_t	i1;

	i1 = 0;
	if (!dst && !src)
		return (0);
	if ((size_t)dst - (size_t)src < len)
	{
		i1 = len - 1;
		while (i1 < len)
		{
			((unsigned char *)dst)[i1] = ((unsigned char *)src)[i1];
			i1--;
		}
	}
	else
	{
		while (i1 < len)
		{
			((unsigned char *)dst)[i1] = ((unsigned char *)src)[i1];
			i1++;
		}
	}
	return (dst);
}
