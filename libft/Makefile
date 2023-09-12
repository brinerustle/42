# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bkrueger <bkrueger@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 12:56:33 by bkrueger          #+#    #+#              #
#    Updated: 2023/09/12 19:00:43 by bkrueger         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = ft_strlen \
		ft_isalpha \
		ft_isdigit \
		ft_isalnum \
		ft_isascii \
		ft_isprint \
		ft_atoi \
		#ft_memmove \
		ft_memmove \
		ft_memcpy \
		ft_strlcpy \
		ft_strlcat \
		ft_memcpy \
		ft_strlcpy \
		ft_strlcat \
		ft_memset \
		ft_bzero \
		ft_toupper \
		ft_tolower \
		ft_strchr \
		ft_strrchr \
		ft_strncmp \
		ft_memchr \
		ft_memcmp \
		ft_strnstr \
		ft_calloc \
		ft_strdup \
		ft_substr \
		ft_strjoin \
		ft_strtrim \
		ft_split \
		ft_itoa \
		ft_strmapi \
		ft_striteri \
		ft_putchar_fd \
		ft_putstr_fd \
		ft_putendl_fd \
		ft_putnbr_fd \

FLAGS = -Wall -Werror -Wextra

HEADER = libft.h

COMPILER = cc $(FLAGS) $(HEADER)

CFILES = $(FILES:%=%.c)

OFILES = $(FILES:%=%.o)

$(NAME):
	$(COMPILER) -c $(CFILES) -I./
	ar -rc $(NAME) $(OFILES)

all: $(NAME)

clean:
	rm -f $(NAME)
	rm -f $(OFILES)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
