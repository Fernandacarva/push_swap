/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:37:33 by ferncarv          #+#    #+#             */
/*   Updated: 2022/12/12 18:20:27 by ferncarv         ###   ########.fr       */
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



