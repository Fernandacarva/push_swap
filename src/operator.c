/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 19:40:50 by ferncarv          #+#    #+#             */
/*   Updated: 2022/12/15 15:20:18 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **stack, char ch)
{
	t_list	*a;
	t_list	*b;

	a = *stack;
	b = (*stack)->next;
	*stack = b;
	a->next = b->next;
	b->next = a;
	if (ch == 'a')
		ft_printf("sa\n");
	else
		ft_printf("sb\n");
}

void	rotate(t_list **stack, char ch)
{
	t_list	*a;
	t_list	*b;

	a = *stack;
	b = list_last(*stack);
	b->next = a;
	*stack = a->next;
	a->next = NULL;
	if (ch == 'a')
		ft_printf("ra\n");
	else
		ft_printf("rb\n");
}

void	rr(t_list **stack, char ch)
{
	t_list	*a;
	t_list	*b;
	t_list	*temp;

	a = *stack;
	b = list_last(*stack);
	temp = a;
	while (temp->next != b)
		temp = temp->next;
	b->next = a;
	temp->next = NULL;
	*stack = b;
	if (ch == 'a')
		ft_printf("rra\n");
	else
		ft_printf("rrb\n");
}

void	pb(t_list **stack, t_list **b)
{
	t_list	*temp;

	temp = *stack;
	if (temp == NULL)
		return ;
	*stack = (*stack)->next;
	temp->next = *b;
	*b = temp;
	ft_printf("pb\n");
}

void	pa(t_list **stack, t_list **b)
{
	t_list	*temp;

	temp = *b;
	if (temp == NULL)
		return ;
	*b = (*b)->next;
	temp->next = *stack;
	*stack = temp;
	ft_printf("pa\n");
}
