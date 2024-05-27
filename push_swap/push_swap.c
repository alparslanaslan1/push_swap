/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaslan <alaslan@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 18:05:52 by alaslan           #+#    #+#             */
/*   Updated: 2024/05/16 15:05:57 by alaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	stack;

	stack.av = NULL;
	stack.num = NULL;
	stack.a = NULL;
	stack.b = NULL;
	if (ac > 1)
	{
		av++;
		if (ac == 2)
		{
			stack.av = ft_split(*av, ' ');
			if (!stack.av)
				ft_error(&stack);
			ft_push_swap(&stack, stack.av);
			ft_free(stack.av);
		}
		else
			ft_push_swap(&stack, av);
		ft_sort(&stack, stack.size_a);
		free(stack.a);
		free(stack.b);
	}
	return (0);
}
