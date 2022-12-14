/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:10:39 by ferncarv          #+#    #+#             */
/*   Updated: 2022/12/14 19:08:52 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_list **stack)
{
	if (is_sorted(stack))
		return ;
	if ((*stack)->content > (*stack)->next->content 
			&& (*stack)->content < (*stack)->next->next->content)
		swap(stack, 'a');
	else if ((*stack)->content > (*stack)->next->content 
			&& (*stack)->next->content > (*stack)->next->next->content)
	{
		swap(stack, 'a');
		rr(stack, 'a');
	}
	else if ((*stack)->content > (*stack)->next->content 
			&& (*stack)->next->content < (*stack)->next->next->content)
		rotate(stack, 'a');
	else if ((*stack)->content < (*stack)->next->content 
			&& (*stack)->content < (*stack)->next->next->content)
	{
		swap(stack, 'a');
		rotate(stack, 'a');
	}
	else if ((*stack)->content < (*stack)->next->content 
			&& (*stack)->content > (*stack)->next->next->content)
		rr(stack, 'a');
}
