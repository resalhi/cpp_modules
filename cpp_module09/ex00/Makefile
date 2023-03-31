# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/14 13:53:24 by ressalhi          #+#    #+#              #
#    Updated: 2023/03/14 13:57:32 by ressalhi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp \
	BitcoinExchange.cpp

all : $(NAME)

$(NAME) :
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME)

fclean : clean

re : fclean all

.PHONY : all clean fclean re
