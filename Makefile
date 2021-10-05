# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aestevam <aestevam@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/21 18:58:00 by aestevam          #+#    #+#              #
#    Updated: 2021/10/05 08:04:35 by aestevam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

CC			=	gcc

RM			=	rm -f

FLAGS		=	-Wall -Wextra -Werror

LIB			=	libft.h

SRCS		=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c \
				ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
				ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
				ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c \
				ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
				ft_strrchr.c ft_tolower.c ft_toupper.c

OBJS		=	${SRCS:%.c=%.o}

all:			$(NAME)

$(NAME): 		$(OBJS) ${LIB}
	ar rc ${NAME} ${OBJS}

${OBJS}:
		${CC} -I . -c ${FLAGS} ${SRCS}

clean:
		$(RM) $(OBJS)

fclean:			clean
		$(RM) $(NAME) a.out libft.so

re:		fclean all

run:	re
		${CC} ${FLAGS} main.c -lft -L . && ./a.out
