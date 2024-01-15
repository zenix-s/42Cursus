# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/15 09:27:02 by serferna          #+#    #+#              #
#    Updated: 2024/01/15 10:16:20 by serferna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a
CC			=	gcc
CFLAGS	=	-Wall -Wextra -Werror
SRC 		=	ft_atoi.c /
					ft_bzero.c /
					ft_calloc.c /
OBJ 		=	$(SRC:.c=.o)
all : $(NAME)
$(NAME) : $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean :
	@rm -f $(OBJ)
fclean : clean
	@rm -f $(NAME)
re : fclean all
.PHONY : all clean fclean re