# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/25 18:33:20 by ressalhi          #+#    #+#              #
#    Updated: 2022/11/25 18:33:34 by ressalhi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp \
	Zombie.cpp \
	ZombieHorde.cpp \

all : $(NAME)

$(NAME) :
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME)

fclean : clean

re : fclean all

.PHONY : all clean fclean re
