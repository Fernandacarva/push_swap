/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:52:28 by ferncarv          #+#    #+#             */
/*   Updated: 2022/12/21 17:58:24 by ferncarv         ###   ########.fr       */
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
	}
	sort_three(stack);
	if (is_sorted(b))
		rotate(b, 'b');
	pa(b, stack);
	pa(b, stack);
}

void	is_big(t_list **a)
{
	int	i;
	int	bit;
	t_list *b;
	int	size_b;

	b = 0;
	i = 0;
	bit = 0;
	while (!is_sorted(a))
	{
		i = 0;
		while (i < size(a))
		{
		 	if ((*a)->index << bit & 1)
				rotate(a, 'a');
			else
				pb(a, &b);
			i++;
		}
		size_b = size(&b);
		while(size_b)
		{
			pa(&b, a);	
			size_b--;
		}
		bit++;
	}
}
