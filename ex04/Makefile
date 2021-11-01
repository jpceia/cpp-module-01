# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jceia <jceia@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/01 06:52:24 by jceia             #+#    #+#              #
#    Updated: 2021/11/01 09:31:43 by jceia            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= winner_sed

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

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

all: $(NAME)

clean:
	$(RM) $(NAME)

fclean:	clean

# Rebuild
re:	fclean all

# Debug
debug:		CXXFLAGS += $(FLAGS_DEBUG)
debug:		re


.PHONY:		all clean fclean re
