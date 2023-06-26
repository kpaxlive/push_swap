/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_helper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fayan <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:43:36 by fayan             #+#    #+#             */
/*   Updated: 2022/07/30 14:43:38 by fayan            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		i;

	i = 0;
	while (s[i])
		i++;
	dup = (char *) malloc(i + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;
	int		lenght;

	if (!s)
		return (0);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	lenght = 0;
	if (len > ft_strlen(s) - start)
		lenght = (ft_strlen(s) - start);
	else if (len <= ft_strlen(s) - start)
		lenght = len;
	sub = (char *) malloc ((lenght + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	i = 0;
	while (s[i] && i < lenght)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
