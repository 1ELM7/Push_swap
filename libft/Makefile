# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmendez <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/14 19:16:56 by jmendez           #+#    #+#              #
#    Updated: 2023/01/13 17:30:04 by jmendez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c\
	  ft_isdigit.c \
	  ft_isalnum.c  \
	  ft_isascii.c   \
	  ft_isprint.c	  \
	  ft_strlen.c\
	  ft_memset.c \
	  ft_bzero.c   \
	  ft_memcpy.c	\
	  ft_memmove.c	 \
	  ft_strlcpy.c\
	  ft_strlcat.c \
	  ft_toupper.c  \
	  ft_tolower.c   \
	  ft_strchr.c\
	  ft_strrchr.c\
	  ft_strncmp.c \
	  ft_memchr.c   \
	  ft_memcmp.c	 \
	  ft_atol.c \
	  ft_atoi.c	 \
	  ft_strnstr.c\
	  ft_calloc.c  \
	  ft_strdup.c	\
	  ft_substr.c\
	  ft_strjoin.c\
	  ft_strtrim.c \
	  ft_split.c 	\
	  ft_itoa.c   \
	  ft_strmapi.c \
	  ft_striteri.c \
	  ft_putstr_fd.c\
	  ft_putnbr_fd.c \
	  ft_putchar_fd.c \
	  ft_putendl_fd.c  \


SRC_BONUS = ft_lstnew.c\
			ft_lstmap.c \
			ft_lstsize.c \
			ft_lstlast.c  \
			ft_lstiter.c   \
			ft_lstclear.c   \
			ft_lstdelone.c   \
			ft_lstadd_back.c  \
			ft_lstadd_front.c  \


OBJ = ${SRC:.c=.o}

CFLAG = -Wall -Werror -Wextra

CC = clang

OBJ_BONUS = ${SRC_BONUS:.c=.o}

ifdef BONUS
	SRC += ${SRC_BONUS}
endif

.c.o:
	@gcc ${CFLAG} -c $< -o ${<:.c=.o}

${NAME}: ${OBJ}
	@ar rc ${NAME} ${OBJ}

all: ${NAME}

bonus:
	@make BONUS=1

clean:
	@rm -f ${OBJ} ${OBJ_BONUS}

fclean: clean
	@rm -f ${NAME}

re: fclean all

.PHONY : all so bonus clean fclean re
