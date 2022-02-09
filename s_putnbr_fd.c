/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_putnbr_fd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spena-mu <spena-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:28:21 by spena-mu          #+#    #+#             */
/*   Updated: 2022/02/09 19:02:05 by spena-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs.h"

void	s_putnbr_fd(int n, int fd)
{
	unsigned int	nn;

	if (n < 0)
	{
		s_putchar_fd('-', fd);
		nn = (unsigned int)(n * -1);
	}
	else
		nn = (unsigned int)n;
	if (nn >= 10)
		s_putnbr_fd(nn / 10, fd);
	s_putchar_fd((char)(nn % 10 + '0'), fd);
}
