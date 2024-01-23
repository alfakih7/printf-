# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: almohame <almohame@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/02 18:13:56 by almohame          #+#    #+#              #
#    Updated: 2024/01/09 18:46:06 by almohame         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS	=  \
	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
	ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
	ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c
	
BSRC	= ft_lstadd_back.c	ft_lstadd_front.c	ft_lstlast.c	ft_lstnew.c \
	ft_lstsize.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS	= $(SRCS:.c=.o)

BONUS	= $(BSRC:.c=.o)

NAME	= libft.a

LIB	= ar -rcs
CC	= cc
RM	= rm -f

CFLAGS	= -Wall -Werror -Wextra

all: $(NAME);

${NAME}: ${OBJS}
		${LIB} ${NAME} ${OBJS}

%.o : %.c
	${CC} ${CFLAGS} -c $< -o $@

bonus: ${NAME} ${BONUS}
		${LIB} ${NAME} ${BONUS}
clean:
		${RM} ${OBJS} ${BONUS}

fclean:		clean
		${RM} ${NAME}
re:		fclean all

.PHONY:	clean re fclean

