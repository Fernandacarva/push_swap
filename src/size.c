/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:13:18 by ferncarv          #+#    #+#             */
/*   Updated: 2022/12/22 23:07:57 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	size(t_list **a)
{
	int		size;
	t_list	*temp;

	temp = *a;
	size = 0;
	while (*a != NULL)
	{
		size++;
		*a = (*a)->next;
	}
	*a = temp;
	return (size);
}
