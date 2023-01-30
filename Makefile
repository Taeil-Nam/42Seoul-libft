# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnam <tnam@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/17 11:12:32 by tnam              #+#    #+#              #
#    Updated: 2023/01/30 16:13:33 by tnam             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libft.a

CC				= cc
CFLAG			= -Wall -Wextra -Werror

RM				= rm -f

AR				= ar
ARFLAG			= crs

INCLUDES		= ./libft.h

SRCS_M			= ft_strlcpy.c		\
				  ft_strlcat.c		\
				  ft_isalpha.c		\
				  ft_isdigit.c		\
				  ft_isalnum.c		\
				  ft_isascii.c		\
				  ft_isprint.c		\
				  ft_strlen.c		\
				  ft_memset.c		\
				  ft_bzero.c		\
				  ft_memcpy.c		\
				  ft_memmove.c		\
				  ft_strlcpy.c		\
				  ft_strlcat.c		\
				  ft_toupper.c		\
				  ft_tolower.c		\
				  ft_strchr.c		\
				  ft_strrchr.c		\
				  ft_strncmp.c		\
				  ft_memchr.c		\
				  ft_memcmp.c		\
				  ft_strnstr.c		\
				  ft_atoi.c			\
				  ft_calloc.c		\
				  ft_strdup.c		\
				  ft_substr.c		\
				  ft_strjoin.c		\
				  ft_striteri.c		\
				  ft_strtrim.c		\
				  ft_split.c		\
				  ft_itoa.c			\
				  ft_strmapi.c		\
				  ft_putchar_fd.c	\
				  ft_putstr_fd.c	\
				  ft_putendl_fd.c	\
				  ft_putnbr_fd.c	\
				  
SRCS_B			= ft_lstnew.c		\
				  ft_lstadd_front.c \
				  ft_lstsize.c		\
				  ft_lstlast.c		\
				  ft_lstadd_back.c	\
				  ft_lstdelone.c	\
				  ft_lstclear.c		\
				  ft_lstiter.c		\
				  ft_lstmap.c		\

OBJS_M			= $(SRCS_M:.c=.o)
OBJS_B			= $(SRCS_B:.c=.o)

BONUS_MODE := $(findstring $(MAKECMDGOALS),bonus)

all: $(NAME)

bonus: $(NAME)

$(NAME): $(OBJS_M) $(if $(BONUS_MODE),$(OBJS_B))
	$(AR) $(ARFLAG) $@ $^

%.o : %.c
	$(CC) $(CFLAG) -c $< -o $@

clean :
	$(RM) $(OBJS_M) $(OBJS_B)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re bonus