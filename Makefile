# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/13 15:45:18 by ferncarv          #+#    #+#              #
#    Updated: 2022/12/14 17:53:30 by ferncarv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= cc
CFLAGS		= -Wall -Wextra -Werror -g
NAME		= push_swap 
SRCS		= push_swap.c validation.c ft_lstnew.c push_swap_utils.c operator.c sort.c
LIBFT		= ./libft/libft.a

PRINTF		= ./printf/libftprintf.a
OBJS		= $(SRCS:.c=.o)
RM			= rm -rf

.c.o:
			$(CC) $(CFLAGS)  -c $< -o $(<:.c=.o)

all:		$(NAME)

$(NAME):	$(LIBFT) $(PRINTF) $(OBJS)
			$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(PRINTF) -o $(NAME)	
			
			
$(LIBFT):
	make -C ./libft
$(PRINTF):
	make -C ./printf
clean:
			$(RM) $(OBJS)
			make clean -C ./libft

fclean:		clean
			$(RM) $(NAME)
			make fclean -C ./libft

re:			fclean all
			make re -C ./libft

.PHONY:		all clean fclean re
