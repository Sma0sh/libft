# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: diteixei <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/04 10:04:45 by diteixei          #+#    #+#              #
#    Updated: 2023/10/24 12:07:44 by diteixei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= \
 	 ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_isalpha.c ft_isdigit.c \
	 ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
	 ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
	 ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_putchar_fd.c \
	 ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_substr.c ft_strjoin.c \
	 ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c

BSRCS	= \
	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c  ft_lstlast.c ft_lstadd_back.c \
	ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS	= $(SRCS:.c=.o)
BOBJS	= $(BSRCS:.c=.o)

CC	= cc
CFLAGS	= -Wall -Wextra -Werror
AR 	= ar rcs
RM	= rm -f

NAME	= libft.a

all:	 $(NAME)

$(NAME): $(OBJS) 
	  $(AR) $(NAME) $(OBJS)

bonus:	 $(BOBJS)
	  $(AR) $(NAME) $(BOBJS)
clean:
	  $(RM) $(OBJS) $(BOBJS)

fclean:	 clean
	  $(RM) $(NAME)

re: 	 fclean $(NAME)

.PHONY:  all bonus clean fclean re
