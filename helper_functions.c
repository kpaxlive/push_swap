/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fayan <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:41:49 by fayan             #+#    #+#             */
/*   Updated: 2022/07/30 14:41:51 by fayan            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_a_s(char **str, t_list *stack)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		stack->a[i] = ft_atoi(str[i]);
		i++;
	}
	stack->a_len = i;
	stack->b_len = 0;
}

void	fill_a(int argc, char **argv, t_list *stack)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		stack->a[j] = ft_atoi(argv[i]);
		i++;
		j++;
	}
	stack->a_len = j;
	stack->b_len = 0;
}

void	fill_process(int argc, char **argv, t_list *stack)
{
	char	**arguments;

	is_digit(argc, argv);
	if (argc == 2 && has_space(argv[1]))
	{
		arguments = ft_split(argv[1], ' ');
		fill_a_s(arguments, stack);
		free(arguments);
	}
	else if (argc >= 2)
		fill_a(argc, argv, stack);
}

void	argument_divide(int a, t_list *stack)
{
	if (a == 2 && stack->a[0] > stack->a[1])
		ra(stack);
	else if (a == 3)
		sort_three(stack);
	else if (a == 4 || a == 5)
		sort_five(stack);
	else if (a > 5)
		sort_big(stack);
}
