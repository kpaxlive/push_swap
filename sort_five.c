/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fayan <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:42:49 by fayan             #+#    #+#             */
/*   Updated: 2022/07/30 14:42:51 by fayan            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_smallest(t_list *stack)
{
	int	i;
	int	tmp;
	int	a;

	a = stack->a_len;
	i = 0;
	tmp = stack->a[0];
	while (i < a)
	{
		if (stack->a[i] < tmp)
			tmp = stack->a[i];
		i++;
	}
	i = 0;
	while (a >= 0)
	{
		if (stack->a[0] == tmp)
		{
			pb(stack);
			break ;
		}
		ra(stack);
	}
}

void	sort_five(t_list *stack)
{
	if (stack->a_len == 4)
	{
		push_smallest(stack);
		sort_three(stack);
		pa(stack);
	}
	else if (stack->a_len == 5)
	{
		push_smallest(stack);
		push_smallest(stack);
		sort_three(stack);
		pa(stack);
		pa(stack);
	}
}
