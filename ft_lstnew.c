/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:12:57 by ferncarv          #+#    #+#             */
/*   Updated: 2022/12/12 19:36:12 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"
#include <stdio.h>

t_list *ft_lstnew(int content_list, int index)
{
	t_list *new;

	new = malloc(sizeof(t_list));
	new -> content = content_list;
	new -> index = index;
	new -> next = NULL;
	return (new);
}

void	ft_lstaddback(t_list **stack, int content, int index)
{
	t_list	*aux;

	aux = *stack;
	while (aux->next != NULL)
	{
		aux = aux->next;
	}
	aux->next = ft_lstnew(content, index);
}

