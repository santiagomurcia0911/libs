/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_memchr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spena-mu <spena-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 19:47:54 by spena-mu          #+#    #+#             */
/*   Updated: 2022/02/03 13:59:56 by spena-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs.h"

void	*s_memchr(const void *s, int c, size_t n)
{
	size_t	i1;

	i1 = 0;
	while (i1 < n)
	{
		if (((unsigned char *)s)[i1] == (unsigned char)c)
			return (((unsigned char *)s) + i1);
		i1++;
	}
	return (NULL);
}
