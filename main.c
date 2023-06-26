/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fayan <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:40:22 by fayan             #+#    #+#             */
/*   Updated: 2022/07/30 14:40:26 by fayan            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*allocate_memory(int argc)
{
	t_list	*stack;

	stack = (t_list *)malloc(sizeof(t_list));
	stack->a = malloc(sizeof(int) * argc);
	stack->b = malloc(sizeof(int) * argc);
	return (stack);
}

int	main(int argc, char **argv)
{
	t_list	*stack;
	int		a;

	if (argc < 2 || (argc == 2 && !has_space(argv[1])))
		return (0);
	a = argc_count(argc, argv);
	stack = allocate_memory(a);
	fill_process(argc, argv, stack);
	has_double(a, stack);
	if (is_sorted(stack))
		return (0);
	argument_divide(a, stack);
	return (0);
}
