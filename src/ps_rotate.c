/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeby <saeby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:35:01 by saeby             #+#    #+#             */
/*   Updated: 2022/12/26 13:03:51 by saeby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_lists	*ps_ra(t_lists *stacks)
{
	write(1, "ra\n", 3);
	stacks->count++;
	stacks->a = ps_lstrotate(stacks->a);
	return (stacks);
}

t_lists	*ps_rb(t_lists *stacks)
{
	write(1, "rb\n", 3);
	stacks->count++;
	stacks->b = ps_lstrotate(stacks->b);
	return (stacks);
}

t_lists	*ps_rr(t_lists *stacks)
{
	write(1, "rr\n", 3);
	stacks->count += 2;
	stacks->a = ps_lstrotate(stacks->a);
	stacks->b = ps_lstrotate(stacks->b);
	return (stacks);
}
