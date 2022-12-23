/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:10:39 by ferncarv          #+#    #+#             */
/*   Updated: 2022/12/22 23:17:19 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_rr(t_list **stack)
{
	swap(stack, 'a');
	rr(stack, 'a');
}

void	sort_three(t_list **stack)
{
	t_list	*temp;

	temp = *stack;
	if (is_sorted(stack))
		return ;
	if ((temp)->content > (temp)->next->content
		&& (temp)->content < (temp)->next->next->content)
		swap(stack, 'a');
	else if ((temp)->content > (temp)->next->content
		&& (temp)->next->content > (temp)->next->next->content)
		swap_rr(stack);
	else if ((temp)->content > (temp)->next->content
		&& (temp)->next->content < (temp)->next->next->content)
		rotate(stack, 'a');
	else if (temp->content < temp->next->content
		&& temp->content < temp->next->next->content)
	{
		swap(stack, 'a');
		rotate(stack, 'a');
	}
	else if ((temp)->content < (temp)->next->content
		&& (temp)->content > (temp)->next->next->content)
		rr(stack, 'a');
}
