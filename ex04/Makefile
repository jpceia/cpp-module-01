# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/01 06:52:24 by jceia             #+#    #+#              #
#    Updated: 2021/12/14 15:43:46 by jpceia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= replace

SRCS 		= $(shell find . -name "*.cpp" -type f)
OBJS		= $(SRCS:%.cpp=%.o)

CXX	 		= clang++
RM   		= rm -f

FLAGS_WARN	= -Wall -Werror -Wextra -pedantic-errors
FLAGS_DEBUG	= -g -fsanitize=address

CXXFLAGS	= $(FLAGS_WARN) $(FLAGS_INC) -std=c++98 

# Object compilation
.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Linking
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

all: $(NAME)

# Cleaning
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

# Rebuild
re:	fclean all

# Debug
debug:		CXXFLAGS += $(FLAGS_DEBUG)
debug:		re


.PHONY:		all clean fclean re debug
