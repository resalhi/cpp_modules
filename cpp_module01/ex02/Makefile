# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 12:01:15 by ressalhi          #+#    #+#              #
#    Updated: 2022/11/28 12:02:36 by ressalhi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = hi_this_is_brain
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp

all : $(NAME)

$(NAME) :
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME)

fclean : clean

re : fclean all

.PHONY : all clean fclean re
