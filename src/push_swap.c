/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:36:40 by ferncarv          #+#    #+#             */
/*   Updated: 2022/12/23 00:56:20 by ferncarv         ###   ########.fr       */
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

int	make_stack(t_list **a, char **argv, int i)
{
	int	receive;

	receive = get_index(argv, atoi_long(argv[i]));
	if (i == 1)
		*a = ft_lstnew(atoi_long(argv[i]), receive);
	else
		ft_lstaddback(a, atoi_long(argv[i]), receive);
	return (1);
}

void	the_finish(t_list *a)
{
	t_list	temp;

	while (a)
	{
		temp = a;
		a = a->next;
		free(temp);
	}
}

int	main(int argc, char **argv)
{
	int		i;
	t_list	*a;
	t_list	*b;

	i = 1;
	b = 0;
	if (argc < 2)
		exit (0);
	if (!is_digite(argv) || !repeat(argv))
	{
		write(2, "Error\n", 6);
		exit (0);
	}
	while (i < argc)
		i += make_stack(&a, argv, i);
	if (argc == 4)
		sort_three(&a);
	else if (argc == 6)
		sort_five(&a, &b);
	else
		is_big(&a);
	exit (0);
}
