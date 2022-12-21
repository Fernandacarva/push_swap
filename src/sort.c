/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:10:39 by ferncarv          #+#    #+#             */
/*   Updated: 2022/12/21 15:39:31 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_list **stack)
{
	t_list *temp;

	temp = *stack;
	if (is_sorted(stack))
		return ;
	if ((temp)->content > (temp)->next->content 
		&& (temp)->content < (temp)->next->next->content)
		swap(stack, 'a');
	else if ((temp)->content > (temp)->next->content 
			&& (temp)->next->content > (temp)->next->next->content)
	{
		swap(stack, 'a');
		rr(stack, 'a');
	}
	else if ((temp)->content > (temp)->next->content 
			&& (temp)->next->content < (temp)->next->next->content)
		rotate(stack, 'a');
	else if (temp->content < temp->next->content && temp->content < temp->next->next->content)
	{
		swap(stack, 'a');
		rotate(stack, 'a');
	}
	else if ((temp)->content < (temp)->next->content 
			&& (temp)->content > (temp)->next->next->content)
		rr(stack, 'a');
}


