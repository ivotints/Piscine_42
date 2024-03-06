# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/07 00:15:43 by ivotints          #+#    #+#              #
#    Updated: 2023/12/07 00:15:46 by ivotints         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = do-op.c do-op2.c ft_atoi.c ft_putnbr.c

all: do-op

do-op : $(SRCS:.c=.o)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c doop.h
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f *.o

fclean: clean
	rm -f do-op

.PHONY: all clean fclean
