/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaslan <alaslan@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 18:14:05 by alaslan           #+#    #+#             */
/*   Updated: 2024/05/15 20:17:40 by alaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_stack
{
	int		*a;
	int		*b;
	int		size_a;
	int		size_b;
	char	**av;
	char	*num;
}			t_stack;

void		ft_push_swap(t_stack *stack, char **av);
int			ft_ps_strlen(char **str);
int			ft_ps_atoi(t_stack *stack, int i);
void		check_duplicates(t_stack *stack);
int			ft_checked_sorted(int *stack_a, int size, int flag);
int			ft_sort(t_stack *stack, int size);
void		ft_sort_three(t_stack *s);
void		ft_bubble_sort(int *tmp_stack, int size);
void		ft_quicksort_3(t_stack *stack, int len);
int			ft_sort_small_b(t_stack *s, int len);
int			ft_push(t_stack *stack, int len, int operation);
int			get_middle(int *pivot, int *stack_a, int size);
int			ft_quicksort_a(t_stack *stack, int len, int count);
int			ft_quicksort_b(t_stack *stack, int len, int count);
void		sa(t_stack *stack, int print);
void		rra(t_stack *stack, int print);
void		ra(t_stack *stack, int print);
void		pa(t_stack *stack, int print);
void		pb(t_stack *stack, int print);
void		sb(t_stack *stack, int print);
void		rb(t_stack *stack, int print);
void		rrb(t_stack *stack, int print);
void		ss(t_stack *stack, int print);
void		rr(t_stack *stack, int print);
void		rrr(t_stack *stack, int print);
void		ft_error(t_stack *stack);
void		ft_free(char **str);

#endif
