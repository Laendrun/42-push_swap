/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeby <saeby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 16:18:05 by saeby             #+#    #+#             */
/*   Updated: 2022/12/26 18:05:39 by saeby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_lstprint(t_dlist *lst)
{
	t_dlist	*tmp;

	tmp = lst;
	while (tmp)
	{
		printf("%ld\n", tmp->content);
		tmp = tmp->next;
	}
}
