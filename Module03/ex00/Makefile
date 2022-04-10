# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/27 17:09:30 by ladawi            #+#    #+#              #
#    Updated: 2022/04/10 17:20:25 by ladawi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = clang++

FILES = main.cpp ClapTrap.cpp

OBJS = $(FILES:%.cpp=%.o)

INCLUDES = ClapTrap.hpp

END = \033[0m
RED = \033[0;91m
YEL = \033[93m
GRE = \033[0;92m
PUR = \033[0;95m
BLU = \033[0;34m
BOLD = \033[1m

all : $(NAME)

$(NAME) : $(OBJS) $(INCLUDES)
	$(CC) $(FLAGS) $(OBJS) -I . -o $(NAME)

%.o : %.cpp $(INCLUDES)
	$(CC) -c $< -I .

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all