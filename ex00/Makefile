# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahammad <ahammad@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/29 11:44:46 by ahammad           #+#    #+#              #
#    Updated: 2023/03/31 11:14:23 by ahammad          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp
OBJS	=	$(SRCS:.cpp=.o)
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
NAME	=	btc
CC		=	c++

.cpp.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)
all:	${NAME}
${NAME}:	${OBJS}
			${CC} ${CFLAGS} ${OBJS} -o ${NAME}
clean:
			rm -f ${OBJS}
fclean:		clean
			rm -f ${NAME}
re:			fclean all
.PHONY:		all clean fclean re