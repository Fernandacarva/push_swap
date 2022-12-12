/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:26:17 by ferncarv          #+#    #+#             */
/*   Updated: 2022/12/12 19:27:49 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H


# include <unistd.h>
# include "./libft/libft.h"

# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef struct s_list{
	int		content;
	int		index;
	struct	s_list *next; 
} t_list;

int	repeat(char **argv);
long atoi_long(char *argv);
t_list *ft_lstnew(int content_list, int index);
int	get_index(char **argv, int aux);
void	ft_lstaddback(t_list ** stack, int content, int index);
#endif
