# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: onovytsk <onovytsk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/03 14:57:48 by onovytsk          #+#    #+#              #
#    Updated: 2023/12/06 18:05:48 by onovytsk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.c ft_atoi.c ft_check_util.c ft_check.c ft_split.c ft_strncpy.c solve_me.c util_me.c input_me.c
OBJS	= ${SRCS:.c=.o}
NAME	= bsq
CC		= cc
RM		= rm -f
CFLAGS	= -Wall -Werror -Wextra 

.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME} : ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all : ${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY: all clean fclean re .c.o
