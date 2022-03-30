# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/27 17:09:30 by ladawi            #+#    #+#              #
#    Updated: 2022/03/30 19:22:46 by ladawi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BraiiiiiiinnnzzzZ
FLAGS = -Wall -Wextra -Werror -std=c++98 -g3 -fsanitize=address
CC = clang++

FILES = main.cpp Harl.cpp

OBJS = $(FILES:%.cpp=%.o)

INCLUDES = Harl.hpp

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

%.o : %.cpp
	$(CC) -c $< -I .

clean : 
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all