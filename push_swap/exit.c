/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaslan <alaslan@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 15:22:54 by alaslan           #+#    #+#             */
/*   Updated: 2024/05/12 15:24:21 by alaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <unistd.h>

void	ft_free(char **str)
{
	int	i;

	i = -1;
	while (++i, str[i])
		free(str[i]);
	free(str);
}

void	ft_error(t_stack *stack)
{
	if (stack->av)
		ft_free(stack->av);
	if (stack->a)
		free(stack->a);
	if (stack->b)
		free(stack->b);
	if (stack->num)
		free(stack->num);
	write(2, "Error\n", 6);
	exit(1);
}
