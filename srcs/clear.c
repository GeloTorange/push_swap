/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torange <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 17:09:13 by torange           #+#    #+#             */
/*   Updated: 2020/07/12 17:09:22 by torange          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			clear_t_content(t_listp *top)
{
	t_listp		*p;
	t_listp		*tmp;

	p = top;
	while (p != NULL)
	{
		tmp = p;
		p = p->next;
		free(tmp->data);
	}
}

void			clear_t_listp(t_listp **top)
{
	t_listp		*list;
	t_listp		*nxtlst;

	list = *top;
	while (list)
	{
		nxtlst = list->next;
		free(list->data);
		free(list);
		list = nxtlst;
	}
	*top = NULL;
}

void			clear_stack(t_push_swap **ps)
{
	clear_t_listp(&((*ps)->a->top));
	clear_t_listp(&((*ps)->b->top));
	free((*ps)->a);
	free((*ps)->b);
	free(*ps);
}

t_content		*lastelem(t_listp *list)
{
	while (list->next)
		list = list->next;
	return (list->data);
}
