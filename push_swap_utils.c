/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:37:33 by ferncarv          #+#    #+#             */
/*   Updated: 2022/12/14 18:41:58 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_index(char **argv, int aux)
{
	int	j;
	int	position;

	j = 1;
	position = 0;
	while (argv[j])
	{
		if (aux > atoi_long(argv[j]))
			position++;
		j++;
	}
	return (position);
}

t_list	*list_last(t_list *list)
{
	t_list	*temp;

	temp = list;
	while (temp->next != NULL)
		temp = temp->next;
	return (temp);
}
