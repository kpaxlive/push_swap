/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fayan <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:41:11 by fayan             #+#    #+#             */
/*   Updated: 2022/07/30 14:41:21 by fayan            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_list *stack)
{
	if (stack->a_len >= 1)
	{
		stack->b_len++;
		stack->b[stack->b_len - 1] = stack->a[0];
		slide_a_b_r(stack, 1, 1);
		slide_a_b_r(stack, 0, 0);
		write(1, "pb\n", 3);
	}
}

void	ra(t_list *stack)
{
	int	tmp;
	int	i;
	int	j;

	i = 1;
	j = -1;
	if (stack->a_len >= 2)
	{
		tmp = stack->a[0];
		while (++j < stack->a_len)
			stack->a[j] = stack->a[i++];
		stack->a[stack->a_len -1] = tmp;
		write(1, "ra\n", 3);
	}
}

void	rb(t_list *stack)
{
	int	tmp;
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (stack->b_len >= 2)
	{
		tmp = stack->b[0];
		while (j < stack->b_len)
		{
			stack->b[j] = stack->b[i];
			i++;
			j++;
		}
		stack->b[stack->b_len -1] = tmp;
		write(1, "rb\n", 3);
	}
}

void	rr(t_list *stack)
{
	ra(stack);
	rb(stack);
	write(1, "rr\n", 3);
}
