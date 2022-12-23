/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:13:14 by ferncarv          #+#    #+#             */
/*   Updated: 2022/12/22 23:20:31 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_digite(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if ((j == 0) && (argv[i][j] == '-' || argv[i][j] == '+'))
				j++;
			if (argv[i][j] < '0' || argv[i][j] > '9')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	repeat(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i + 1])
	{
		j = i + 1;
		while (argv[j])
		{
			if (!ft_strncmp(argv[i], argv[j], 10))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

long	atoi_long(char *argv)
{
	long	i;
	long	aux;
	int		signal;

	i = 0;
	aux = 0;
	signal = 1;
	while ((argv[i] >= 9 && argv[i] <= 13) || argv[i] == 32)
			i++;
	if (argv[i] == '-')
		signal = -1;
	if (argv[i] == '+' || argv[i] == '-')
		i++;
	while (argv[i] >= '0' && argv[i] <= '9' && argv[i] != 0)
	{
		aux = aux * 10 + (argv[i] - '0');
		i++;
	}			
	aux = signal * aux;
	if (aux > INT_MAX || aux < INT_MIN)
	{
		write(1, "Error\n", 6);
		exit(0);
	}
	return (aux);
}

int	is_sorted(t_list **stack)
{
	t_list	*temp;

	temp = *stack;
	while (temp->next != NULL)
	{
		if (temp->content > temp->next->content)
			return (0);
		temp = temp->next;
	}
	return (1);
}
