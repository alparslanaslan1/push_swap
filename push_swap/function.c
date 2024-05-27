/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaslan <alaslan@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 18:05:14 by alaslan           #+#    #+#             */
/*   Updated: 2024/05/16 14:51:42 by alaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"
#include <stdlib.h>
#include <unistd.h>

void	ft_push_swap(t_stack *stack, char **av)
{
	int	i;

	i = -1;
	stack->size_a = ft_ps_strlen(av);
	if (!stack->size_a)
		ft_error(stack);
	stack->a = malloc(sizeof(int) * stack->size_a);
	if (!stack->a)
		return ;
	stack->b = malloc(sizeof(int) * stack->size_a);
	if (!stack->b)
		return (free(stack->a));
	stack->size_b = 0;
	while (av[++i])
	{
		stack->num = ft_strtrim(av[i], " ");
		if (!stack->num || stack->num[0] == '\0')
			ft_error(stack);
		stack->a[i] = ft_ps_atoi(stack, 0);
	}
	check_duplicates(stack);
}

int	ft_ps_strlen(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_ps_atoi(t_stack *stack, int i)
{
	int					sign;
	unsigned long int	num;

	num = 0;
	sign = 1;
	while ((stack->num[i] >= 9 && stack->num[i] <= 13) || stack->num[i] == ' ')
		i++;
	if (stack->num[i] == '-')
		sign = -1;
	if (stack->num[i] == '+' || stack->num[i] == '-')
		i++;
	if (stack->num[i] == '\0')
		ft_error(stack);
	while (stack->num[i])
	{
		if (stack->num[i] < '0' || stack->num[i] > '9')
			ft_error(stack);
		num = (stack->num[i] - '0') + (num * 10);
		i++;
	}
	free(stack->num);
	stack->num = NULL;
	if ((num > 2147483648 && sign == -1) || (num > 2147483647 && sign == 1))
		ft_error(stack);
	return (num * sign);
}

void	check_duplicates(t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack->size_a)
	{
		j = i + 1;
		while (j < stack->size_a)
		{
			if (stack->a[i] == stack->a[j])
				ft_error(stack);
			j++;
		}
		i++;
	}
}
