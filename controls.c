/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controls.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fayan <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:42:03 by fayan             #+#    #+#             */
/*   Updated: 2022/07/30 14:42:06 by fayan            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_list *stack)
{
	int	i;

	i = -1;
	while (++i < stack->a_len - 1)
		if (stack->a[i] > stack->a[i + 1])
			return (0);
	return (1);
}

void	has_double(int a, t_list *stack)
{
	int	i;
	int	j;
	int	c;

	i = -1;
	j = 0;
	c = 0;
	while (i++ < a)
	{
		while (j < a)
		{
			if (stack->a[i] == stack->a[j])
				c++;
			if (c >= 2)
			{
				write(1, "Error\n", 6);
				exit(1);
			}
			j++;
		}
		c = 0;
		j = 0;
	}
}

int	has_space(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			return (1);
		i++;
	}
	return (0);
}

int	argc_count(int argc, char **argv)
{
	char	**argument;
	int		i;

	i = 0;
	if (argc == 2 && has_space(argv[1]))
	{
		argument = ft_split(argv[1], ' ');
		while (argument[i] != 0)
			i++;
		return (i);
	}
	else if (argc >= 2)
		return (argc -1);
	return (0);
}

int	is_digit(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i <= argc -1)
	{
		while (argv[i][j] != '\0')
		{
			if (((argv[i][j] < 48 || argv[i][j] > 57)
				&& argv[i][j] != 45 && argv[i][j] != ' '))
			{
				write(1, "Error\n", 6);
				exit(1);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
