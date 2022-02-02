/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_memset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spena-mu <spena-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:14:30 by spena-mu          #+#    #+#             */
/*   Updated: 2022/02/02 18:36:21 by spena-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libs.h"

void	*s_memset(void *b, int c, size_t len)
{
	size_t	index;

	index = 0;
	while (index < len)
	{
		((unsigned char *)b)[index] = c;
		index++;
	}
	return (b);
}
