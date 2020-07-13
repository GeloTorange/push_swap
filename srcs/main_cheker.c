/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_cheker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torange <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 20:34:00 by torange           #+#    #+#             */
/*   Updated: 2020/07/12 20:35:59 by torange          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_push_swap		*stack;
	char			**str;
	int				i;

	if (argc > 1)
	{
		init_ps(&stack, argc - 1);
		if (!ft_strcmp(argv[1], "-v"))
			stack->vizual = 1;
		while (--argc > (int)stack->vizual)
		{
			str = ft_strsplit(argv[argc], ' ');
			i = ft_arrlen(str);
			check_int(str);
			while (i > -1)
				push(&stack->a, ft_atoi(str[i--]), 0);
		}
		commands_read(&stack);
		clear_stack(&stack);
	}
	return (0);
}
