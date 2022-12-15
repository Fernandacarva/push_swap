/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:10:39 by ferncarv          #+#    #+#             */
/*   Updated: 2022/12/15 17:14:15 by ferncarv         ###   ########.fr       */
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

void	sort_five(t_list **stack, t_list **b)
{
	t_list	*temp;
	int	i;

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
	pb(b, stack);
	pb(b, stack);

}
