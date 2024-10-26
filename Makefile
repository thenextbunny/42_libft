# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joacoelh <joacoelh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/14 20:21:39 by joacoelh          #+#    #+#              #
#    Updated: 2024/10/25 22:29:54 by joacoelh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= libft.a
CC	 		= cc
CFLAGS		= -Wall -Wextra -Werror
AR			= ar
ARFLAGS		= -rcs
SRCS		= ft_isalpha.c ft_isdigit.c ft_isalnum.c \
				ft_isascii.c ft_isprint.c ft_strlen.c \
				ft_memset.c ft_bzero.c ft_memcpy.c \
				ft_memmove.c ft_strlcpy.c ft_strlcat.c \
				ft_toupper.c ft_tolower.c ft_strchr.c \
				ft_strrchr.c ft_strncmp.c ft_memchr.c \
				ft_memcmp.c ft_strnstr.c ft_atoi.c
OBJS		= $(SRCS:%.c=%.o)
RM			= rm -f

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o : %.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean : 
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re