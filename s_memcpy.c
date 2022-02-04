/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_memcpy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spena-mu <spena-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:52:12 by spena-mu          #+#    #+#             */
/*   Updated: 2022/02/04 15:41:11 by spena-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs.h"

void	*s_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i1;
	char	*cd;
	char	*cs;

	cs = (char *)src;
	cd = (char *)dst;
	i1 = 0;
	if (dst == NULL && src == NULL)
		return (0);
	while (i1 < n)
	{
		cd[i1] = cs[i1];
		i1++;
	}
	return (dst);
}	
