/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fayan <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:44:22 by fayan             #+#    #+#             */
/*   Updated: 2022/07/30 14:44:24 by fayan            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int	*a;
	int	*b;
	int	a_len;
	int	b_len;
}t_list;

int		ft_atoi(char *str);
t_list	*allocate_memory(int argc);
void	fill_a(int argc, char **argv, t_list *stack);
void	sa(t_list *stack);
void	sb(t_list *stack);
void	ss(t_list *stack);
void	pa(t_list *stack);
void	pb(t_list *stack);
void	ra(t_list *stack);
void	rb(t_list *stack);
void	rr(t_list *stack);
void	rra(t_list *stack);
void	rrb(t_list *stack);
void	rrr(t_list *stack);
void	sort_three(t_list *stack);
int		is_sorted(t_list *stack);
void	sort_five(t_list *stack);
char	**ft_split(char const *s, char c);
int		is_digit(int argc, char **argv);
void	argument_divide(int a, t_list *stack);
int		has_space(char *str);
void	ft_free(char **tab, int j);
void	slide_a_b_r(t_list *stack, int x, int y);
void	fill_a_s(char **str, t_list *stack);
void	sort_big(t_list *stack);
int		argc_count(int argc, char **argv);
int		has_space(char *str);
void	has_double(int a, t_list *stack);
void	fill_process(int argc, char **argv, t_list *stack);
void	convert_to_simple(t_list *stack);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s);
#endif
