# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmendez <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 16:21:30 by jmendez           #+#    #+#              #
#    Updated: 2023/01/22 19:44:29 by jmendez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CFLAGS = -g -Wall -Werror -Wextra

SRC =   utils/list.c  \
        utils/list_insertion.c  \
        main.c \
        parsing/parsing.c \
        parsing/parsing_utils.c \
        sorting/big_list.c \
        sorting/short_list.c \
        utils/checker_list.c \
        utils/order.c \
        utils/instructions.c \
        sorting/sort_three.c \

OBJ = ${SRC:.c=.o}

CC = clang

.c.o:
	@clang -g ${CFLAG} -c $< -o ${<:.c=.o}

${NAME}: ${OBJ}
	@make -C libft --no-print-directory
	@${CC} -o ${NAME} ${OBJ} ${CFLAGS} -I libft libft/libft.a
	@printf "The program is compiled\n"

all: ${NAME}

clean:
	@rm -f ${OBJ}
	@make clean -C libft --no-print-directory
	@printf "The program is clean and still got it executable push_swap\n"

fclean: clean
	@rm -f ${NAME}
	@make fclean -C libft --no-print-directory
	@printf "The program is all clean\n"

re: fclean all
	@printf "The program cleaned and compiled again the executable push_swap\n"

.PHONY : all clean fclean re
