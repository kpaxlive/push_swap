/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fayan <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:41:31 by fayan             #+#    #+#             */
/*   Updated: 2022/07/30 14:41:36 by fayan            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list *stack)
{
	int	tmp;
	int	i;
	int	j;

	i = 2;
	j = 1;
	if (stack->a_len >= 2)
	{
		tmp = stack->a[stack->a_len -1];
		while (j < stack->a_len)
		{
			stack->a[stack->a_len - j] = stack->a[stack->a_len - i];
			i++;
			j++;
		}
		stack->a[0] = tmp;
		write(1, "rra\n", 4);
	}
}

void	rrb(t_list *stack)
{
	int	tmp;
	int	i;
	int	j;

	i = 2;
	j = 1;
	if (stack->b_len >= 2)
	{
		tmp = stack->b[stack->b_len -1];
		while (j < stack->b_len)
		{
			stack->b[stack->b_len - j] = stack->b[stack->b_len - i];
			i++;
			j++;
		}
		stack->b[0] = tmp;
		write(1, "rrb\n", 4);
	}
}

void	rrr(t_list *stack)
{
	rra(stack);
	rrb(stack);
	write(1, "rrr\n", 4);
}
