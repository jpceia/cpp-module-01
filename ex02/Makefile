# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/14 13:43:42 by jpceia            #+#    #+#              #
#    Updated: 2021/12/14 15:18:16 by jpceia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= brain

SRCS 		= main.cpp

CXX	 		= clang++
RM   		= rm -f

WARN_FLAGS	= -Wall -Werror -Wextra -pedantic-errors

CXXFLAGS 	= $(WARN_FLAGS) -std=c++98 

all:	$(NAME)

$(NAME): $(SRCS)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Cleaning
clean:
	$(RM) $(NAME)

fclean:	clean

# Rebuild
re:	fclean all

# Debug
debug:		CXXFLAGS += $(FLAGS_DEBUG)
debug:		re

.PHONY:		all clean fclean re debug
