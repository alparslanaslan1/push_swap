/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaslan <alaslan@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 18:06:18 by alaslan           #+#    #+#             */
/*   Updated: 2024/05/10 17:59:03 by alaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	pa(t_stack *stack, int print)
{
	int	index;

	if (stack->size_b)
	{
		stack->size_a++;
		index = stack->size_a;
		while (--index > 0)
			stack->a[index] = stack->a[index - 1];
		stack->a[0] = stack->b[0];
		index = -1;
		stack->size_b--;
		while (++index < stack->size_b)
			stack->b[index] = stack->b[index + 1];
		if (!print)
			write(1, "pa\n", 3);
	}
	else
		return ;
}

void	sa(t_stack *stack, int print)
{
	int	tmp;

	tmp = 0;
	if (stack->size_a < 2)
	{
		write(1, "A few argument", 14);
		return ;
	}
	tmp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = tmp;
	if (!print)
		write(1, "sa\n", 3);
}

void	ra(t_stack *stack, int print)
{
	int	tmp;
	int	index;

	index = 0;
	tmp = stack->a[index];
	index++;
	while (index < stack->size_a)
	{
		stack->a[index - 1] = stack->a[index];
		index++;
	}
	stack->a[index - 1] = tmp;
	if (!print)
		write(1, "ra\n", 3);
}

void	rra(t_stack *stack, int print)
{
	int	tmp;
	int	index;

	index = stack->size_a - 1;
	tmp = stack->a[index];
	while (index)
	{
		stack->a[index] = stack->a[index - 1];
		index--;
	}
	stack->a[index] = tmp;
	if (!print)
		write(1, "rra\n", 4);
}
