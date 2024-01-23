# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/15 09:27:02 by serferna          #+#    #+#              #
#    Updated: 2024/01/23 09:43:37 by serferna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a
CC			=	gcc
CFLAGS	=	-Wall -Wextra -Werror
INCLUDE = libft.h
AR			=	ar -rc
RM 			=	rm -f
SRC 		=	ft_isalpha.c \
				ft_isalnum.c \
				ft_isdigit.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strlen.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_strdup.c \
				ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_atoi.c \
				ft_calloc.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_split.c \
				ft_itoa.c \
				ft_strmapi.c \
				ft_striteri.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \

BONUSRC = ft_lstnew.c \
					ft_lstadd_front.c \
					ft_lstsize.c \
					ft_lstlast.c \
					ft_lstadd_back.c \
					ft_lstdelone.c \
					ft_lstclear.c \
					ft_lstiter.c \
					ft_lstmap.c \



OBJ 		=	$(SRC:.c=.o)
BOBJ 		=	$(BONUSRC:.c=.o)

all : $(NAME)

bonus : $(OBJ) $(BOBJ)
	$(AR) $(NAME) $?


%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ) $(INCLUDE)
	$(AR) $(NAME) $(OBJ)

clean :
	$(RM) $(OBJ)
	$(RM) $(BOBJ)
	
fclean : clean
	$(RM) $(NAME)

re : fclean all
rebonus : fclean bonus

# .PHONY : all clean fclean re
.PHONY : all clean fclean re bonus rebonus
