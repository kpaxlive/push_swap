/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fayan <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:42:24 by fayan             #+#    #+#             */
/*   Updated: 2022/07/30 14:42:26 by fayan            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(int *x, int *y)
{
	int	c;

	c = *x;
	*x = *y;
	*y = c;
}

void	slide_if(t_list *stack, int x, int a)
{
	if (x)
	{
		while (++a < stack->b_len - 1)
			ft_swap(&stack->b[a], &stack->b[a + 1]);
		stack->b_len--;
	}
	else
	{
		while (++a < stack->a_len - 1)
			ft_swap(&stack->a[a], &stack->a[a + 1]);
		stack->a_len--;
	}
}

void	slide_a_b_r(t_list *stack, int x, int y)
{
	int	a;

	a = -1;
	if (y)
	{
		if (x)
			while (++a < stack->b_len - 1)
				ft_swap(&stack->b[stack->b_len - 1 - a],
					&stack->b[stack->b_len - 2 - a]);
		else
			while (++a < stack->a_len - 1)
				ft_swap(&stack->a[stack->a_len - 1 - a],
					&stack->a[stack->a_len - 2 - a]);
	}
	else
		slide_if(stack, x, a);
}

int	ft_atoi(char *str)
{
	int			i;
	long long	a;
	int			sign;

	sign = 1;
	a = 0;
	i = 0;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		a = (str[i] - '0') + (a * 10);
		i++;
	}
	if (a < -2147483648 || a > 2147483647)
	{
		write(1, "Error\n", 6);
		exit(1);
	}
	return (a * sign);
}
