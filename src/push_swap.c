/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:36:40 by ferncarv          #+#    #+#             */
/*   Updated: 2022/12/21 17:49:35 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_list **a)
{
	t_list	*stack;

	stack = *a;
	while (stack)
	{
		printf("index: %d | ", stack->index);
		printf("content: %d\n", stack->content);
		stack = stack -> next;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	t_list	*a;
	t_list	*b;
	int		receive;
	//t_list	*aux;

	i = 1;
	b = 0;
	if (argc < 2)
		return (0);
	if (!is_digite(*argv) || !repeat(argv))
		write(1, "Error\n", 6);
	while (i < argc)
	{
		receive = get_index(argv, atoi_long(argv[i]));
		if (i == 1)
			a = ft_lstnew(atoi_long(argv[i]), receive);
		else
			ft_lstaddback(&a, atoi_long(argv[i]), receive);
		i++;
	}
	if (argc == 4)
		sort_three(&a);
	else if (argc == 6)
		sort_five(&a, &b);
	//print_stack(&a);
	//ft_printf("stack b \n");
	//ft_print_stack(aux);
	return (0);
}
