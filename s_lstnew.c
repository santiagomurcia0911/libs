/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_lstnew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spena-mu <spena-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:49:52 by spena-mu          #+#    #+#             */
/*   Updated: 2022/02/10 16:11:21 by spena-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs.h"

t_list	*s_lstnew(void *content)
{
	t_list	*l1;

	l1 = malloc(sizeof(t_list));
	if (!l1)
		return (0);
	l1->content = content;
	l1->next = NULL;
	return (l1);
}
