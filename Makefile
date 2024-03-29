# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsoria <fsoria@student.42malaga.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/07 17:15:51 by fsoria            #+#    #+#              #
#    Updated: 2024/02/28 19:52:48 by fsoria           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Werror -Wextra

CFILES = ft_isalnum.c \
ft_isalpha.c \
ft_isdigit.c \
ft_isprint.c \
ft_memset.c \
ft_strlen.c \
ft_bzero.c \
ft_memcpy.c \
ft_isascii.c \
ft_memmove.c \
ft_strlcpy.c \
ft_strlcat.c \
ft_toupper.c \
ft_tolower.c \
ft_strchr.c \
ft_strrchr.c \
ft_strncmp.c \
ft_memchr.c \
ft_memcmp.c \
ft_strnstr.c \
ft_atoi.c \
ft_calloc.c \
ft_strdup.c \
ft_substr.c \
ft_strjoin.c \
ft_strjoin.c \
ft_strtrim.c \
ft_split.c \
ft_itoa.c \
ft_strmapi.c \
ft_striteri.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_lstnew.c \
ft_lstadd_front.c \
ft_lstsize.c \
ft_lslast.c \
ft_lstadd_back.c \
ft_lstclear.c \
ft_lstiter.c \
ft_lstmap.c \
ft_lstdelone.c

OFILES = $(CFILES:.c=.o)

NAME = libft.a

#rules
all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

bonus: $(OFILES) $(BONUS_OFILES)
	ar rcs $(NAME) $(OFILES) $(BONUS_OFILES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY:  all clean fclean re bonus