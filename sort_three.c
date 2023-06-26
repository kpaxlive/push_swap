/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fayan <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:42:40 by fayan             #+#    #+#             */
/*   Updated: 2022/07/30 14:42:42 by fayan            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_list *stack)
{
	if (stack->a[0] < stack->a[1] && stack->a[1] > stack->a[2]
		&& stack->a[2] > stack->a[0])
	{
		ra(stack);
		sa(stack);
		rra(stack);
	}
	else if (stack->a[0] > stack->a[1] && stack->a[2] > stack->a[0])
		sa(stack);
	else if (stack->a[2] > stack->a[1] && stack->a[0] > stack->a[2])
		ra(stack);
	else if (stack->a[1] > stack->a[2] && stack->a[0] > stack->a[1])
	{
		sa(stack);
		rra(stack);
	}
	else if (stack->a[0] > stack->a[2] && stack->a[1] > stack->a[0])
		rra(stack);
}
