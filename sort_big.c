/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fayan <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:43:07 by fayan             #+#    #+#             */
/*   Updated: 2022/07/30 14:43:08 by fayan            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	convert_to_simple(t_list *stack)
{
	int	i;
	int	j;
	int	*array;
	int	counter;

	i = -1;
	array = malloc(sizeof(int) * stack->a_len);
	while (++i < stack->a_len)
	{
		counter = 0;
		j = -1;
		while (++j < stack->a_len)
			if (stack->a[i] > stack->a[j])
				counter++;
		array[i] = counter;
	}
	i = -1;
	while (++i < stack->a_len)
		stack->a[i] = array[i];
	free(array);
}

int	limits(t_list *stack)
{
	int	a;

	a = stack->a_len - 1;
	if (a < 8)
		return (2);
	else if (a >= 8 && a < 16)
		return (3);
	else if (a >= 16 && a < 32)
		return (4);
	else if (a >= 32 && a < 64)
		return (5);
	else if (a >= 64 && a < 128)
		return (6);
	else if (a >= 128 && a < 256)
		return (7);
	else if (a >= 256 && a < 512)
		return (8);
	return (0);
}

void	sort_big(t_list *stack)
{
	int	a;
	int	i;
	int	range;

	convert_to_simple(stack);
	a = limits(stack);
	i = 0;
	while (a >= 0)
	{
		range = stack->a_len;
		while (range > 0)
		{
			if (stack->a[0] >> i & 1)
				ra(stack);
			else
				pb(stack);
			range--;
		}
		while (stack->b_len != 0)
			pa(stack);
		i++;
		a--;
	}
}
