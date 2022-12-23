/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:52:28 by ferncarv          #+#    #+#             */
/*   Updated: 2022/12/22 23:59:54 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five(t_list **stack, t_list **b)
{
	t_list	*temp;
	int		i;

	temp = *stack;
	i = 0;
	while (i < 2)
	{
		if ((temp)->index == 1 || (temp)->index == 0)
		{
			pb(stack, b);
			i++;
		}
		else
			rotate(stack, 'a');
		temp = *stack;
	}
	sort_three(stack);
	if (is_sorted(b))
		rotate(b, 'b');
	pa(stack, b);
	pa(stack, b);
}

void	is_big(t_list **a)
{
	int		i;
	int		bit;
	t_list	*b;
	int		size_a;

	b = 0;
	i = 0;
	bit = 0;
	while (!is_sorted(a))
	{
		i = 0;
		size_a = size(a);
		while (i < size_a)
		{
			if ((((*a)->index >> bit) & 1) == 1)
				rotate(a, 'a');
			else
				pb(a, &b);
			i++;
		}
		while (b)
			pa(a, &b);
		bit++;
	}
}
