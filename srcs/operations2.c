/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torange <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 17:05:31 by torange           #+#    #+#             */
/*   Updated: 2020/07/12 17:05:32 by torange          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_both(t_stack *a, t_stack *b)
{
	swap(a);
	swap(b);
}

void	rotate_both(t_stack *a, t_stack *b)
{
	rotate(&a);
	rotate(&b);
}

void	reverse_rotate_both(t_stack *a, t_stack *b)
{
	reverse_rotate(a);
	reverse_rotate(b);
}

size_t	min(t_stack *stack)
{
	t_listp		*p;
	size_t		minimum;

	minimum = stack->top->data->index;
	p = stack->top;
	stack->top = stack->top->next;
	while (stack->top != NULL)
	{
		if ((size_t)stack->top->data->index < minimum)
			minimum = stack->top->data->index;
		stack->top = stack->top->next;
	}
	stack->top = p;
	return (minimum);
}

size_t	max(t_stack *stack)
{
	t_listp		*p;
	size_t		minimum;

	minimum = stack->top->data->index;
	p = stack->top;
	stack->top = stack->top->next;
	while (stack->top != NULL)
	{
		if ((size_t)stack->top->data->index > minimum)
			minimum = stack->top->data->index;
		stack->top = stack->top->next;
	}
	stack->top = p;
	return (minimum);
}
