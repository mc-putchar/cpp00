# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/12 02:09:00 by mcutura           #+#    #+#              #
#    Updated: 2023/07/13 08:32:08 by mcutura          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := crap
# --- Sources ---
SRCS := crap.cpp
# --- Headers ---
HDRS := PhoneBook.hpp Contact.hpp
# --- Compiler ---
CC := g++
# --- Flags ---
CFLAGS := -Wall -Wextra -Werror -std=c++98
# --- Utils --
RM := rm -rf

# --- Rules ---
all: $(NAME)

$(NAME): $(HDRS) $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
fclean:
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
