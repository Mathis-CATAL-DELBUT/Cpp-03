# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/18 02:12:27 by mcatal-d          #+#    #+#              #
#    Updated: 2023/05/18 04:23:47 by mcatal-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    		= DiamondTrap
SRC             = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJ             = $(SRC:.cpp=.o)
CC              = c++
CFLAGS  		= -Wall -Wextra -Werror -std=c++98
RM              = rm -f

all: $(NAME)


$(NAME): $(OBJ)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re