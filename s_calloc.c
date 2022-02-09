/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_calloc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spena-mu <spena-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:55:41 by spena-mu          #+#    #+#             */
/*   Updated: 2022/02/09 17:05:05 by spena-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs.h"

void	*s_calloc(size_t count, size_t size)
{
	size_t	count_x_size;
	void	*dst;

	count_x_size = count * size;
	dst = malloc(count_x_size);
	if (!dst)
		return (0);
	s_bzero(dst, count_x_size);
	return (dst);
}
