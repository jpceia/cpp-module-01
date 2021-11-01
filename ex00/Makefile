# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jceia <jceia@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/01 06:52:24 by jceia             #+#    #+#              #
#    Updated: 2021/11/01 10:46:28 by jceia            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= zombie

SRC_DIR		= src
OBJ_DIR		= obj
INC_DIR		= headers

SRCS 		= $(shell find $(SRC_DIR) -name "*.cpp" -type f)
OBJS		= $(SRCS:$(SRC_DIR)/%=$(OBJ_DIR)/%.o)

CXX	 		= clang++
RM   		= rm -f

FLAGS_WARN	= -Wall -Werror -Wextra -pedantic-errors
FLAGS_INC	= -I$(INC_DIR)
FLAGS_DEBUG	= -g -fsanitize=address

CXXFLAGS	= $(FLAGS_WARN) $(FLAGS_INC) -std=c++98 

# Object compilation
$(OBJ_DIR)/%.o:	$(SRC_DIR)/%
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

all: $(NAME)

clean:
	$(RM) -rf $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

fclean:	clean

# Rebuild
re:	fclean all

# Debug
debug:		CXXFLAGS += $(FLAGS_DEBUG)
debug:		re


.PHONY:		all clean fclean re
