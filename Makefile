# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 19:44:22 by coder             #+#    #+#              #
#    Updated: 2022/10/05 18:19:17 by guribeir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
SRCS = main.c echo.c clear.c pwd.c
OBJS = ${SRCS:%.c=$(PATH_OBJS)%.o}	
LIBS = libft.a
PATH_SRCS = ./sources/
PATH_OBJS = ./objects/
PATH_LIBS = ./libs/libft

NAME = minishell

all: $(NAME)

$(NAME): $(OBJS) $(LIBS)
	$(CC) $(CFLAGS) $(OBJS) $(PATH_LIBS)/$(LIBS) -lreadline -o $(NAME)

$(PATH_OBJS)%.o: $(PATH_SRCS)%.c
	mkdir -p $(PATH_OBJS)
	cc $(CFLAGS) -I ./include/ -c $< -o $@

$(LIBS):
	make -C $(PATH_LIBS)
	
clean:
	rm -rf $(PATH_OBJS) 
	make clean -C $(PATH_LIBS)
fclean: clean
	rm -f $(NAME)
	make fclean -C $(PATH_LIBS)
re: fclean all

.PHONY: all clean fclean re
