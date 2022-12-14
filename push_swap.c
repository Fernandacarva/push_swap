/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:36:40 by ferncarv          #+#    #+#             */
/*   Updated: 2022/12/14 19:11:08 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_list *teste)
{
	t_list	*stack;

	stack = teste;
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
	t_list	*teste;
	//t_list	*aux;
	int		receive;

	i = 1;
	if (argc < 2)
		return (0);
	if (!ft_isdigit(argv) || !repeat(argv))
		write(1, "Error\n", 6);
	while (i < argc)
	{
		receive = get_index(argv, atoi_long(argv[i]));
		if (i == 1)
			teste = ft_lstnew(atoi_long(argv[i]), receive);
		else
			ft_lstaddback(&teste, atoi_long(argv[i]), receive);
		i++;
	}
	sort_three(&teste);
	print_stack(teste);
	ft_printf("stack b \n");
	//ft_print_stack(aux);
	return (0);
}
