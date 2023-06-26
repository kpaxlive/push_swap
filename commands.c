/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fayan <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:40:44 by fayan             #+#    #+#             */
/*   Updated: 2022/07/30 14:40:54 by fayan            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list *stack)
{
	int	tmp;

	if (stack->a_len >= 2)
	{
		tmp = stack->a[0];
		stack->a[0] = stack->a[1];
		stack->a[1] = tmp;
		write(1, "sa\n", 3);
	}
}

void	sb(t_list *stack)
{
	int	tmp;

	if (stack->b_len >= 2)
	{
		tmp = stack->b[0];
		stack->b[0] = stack->b[1];
		stack->b[1] = tmp;
		write(1, "sb\n", 3);
	}
}

void	ss(t_list *stack)
{
	sa(stack);
	sb(stack);
	write(1, "ss\n", 3);
}

void	pa(t_list *stack)
{
	if (stack->b_len >= 1)
	{
		stack->a_len++;
		stack->a[stack->a_len - 1] = stack->b[0];
		slide_a_b_r(stack, 0, 1);
		slide_a_b_r(stack, 1, 0);
		write(1, "pa\n", 3);
	}
}
