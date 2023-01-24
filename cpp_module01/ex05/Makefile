# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/23 16:17:00 by ressalhi          #+#    #+#              #
#    Updated: 2023/01/23 16:18:00 by ressalhi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Harl.cpp
all : $(NAME)

$(NAME) :
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME)

fclean : clean

re : fclean all

.PHONY : all clean fclean re
