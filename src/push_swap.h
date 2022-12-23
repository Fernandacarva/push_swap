/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:26:17 by ferncarv          #+#    #+#             */
/*   Updated: 2022/12/23 01:03:13 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include "../libft/libft.h"
# include "../printf/ft_printf.h"
# include <stdio.h>

# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef struct s_list{
	int				content;
	int				index;
	struct s_list	*next;
}	t_list;

int		repeat(char **argv);
long	atoi_long(char *argv);
t_list	*ft_lstnew(int content_list, int index);
int		get_index(char **argv, int aux);
void	ft_lstaddback(t_list **stack, int content, int index);
void	ft_lstadd_front(t_list **stack, int content, int index);
void	ft_lstdell(t_list *stack);
void	swap(t_list **stack, char ch);
t_list	*list_last(t_list *list);
void	rotate(t_list **stack, char ch);
void	rr(t_list **stack, char ch);
void	pb(t_list **stack, t_list **b);
void	pa(t_list **stack, t_list **b);
int		is_sorted(t_list **stack);
void	sort_three(t_list **stack);
void	sort_five(t_list **stack, t_list **b);
void	is_big(t_list **a);
int		size(t_list **a);
int		is_digite(char **argv);
void	whow_index(t_list **a);
void	print_stack(t_list **stack);
void	sort_two(t_list **a);
#endif
