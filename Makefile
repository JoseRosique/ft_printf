# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joslopez <joslopez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/03 11:15:16 by joslopez          #+#    #+#              #
#    Updated: 2022/05/16 11:25:38 by joslopez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a 

SRCS	=	ft_putchar.c ft_puthex.c ft_putint.c ft_putnbr_base.c ft_putstr.c ft_putui.c ft_printf.c

OBJS	=	${SRCS:.c=.o}

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

all: $(NAME)

$(NAME):	
		${CC} -c ${CFLAGS} ${SRCS} 
		ar crs ${NAME} ${OBJS}
		
clean:
			${RM} ${OBJS}

fclean:		clean
				${RM} ${NAME}

re:			fclean all

.PHONY: all, clean, fclean, re
