# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/17 14:45:43 by rlouvrie          #+#    #+#              #
#    Updated: 2023/09/28 21:10:24 by rlouvrie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

NAME = BraiiiiiiinnnzzzZ

CPP_FLAGS = -Wall -Werror -Wextra

CPP_VERSION = -std=c++98

SRCS =	main.cpp \
		newZombie.cpp \
		Zombie.cpp \
		randomChump.cpp

OBJS := ${SRCS:.cpp=.o}

all: $(NAME)

$(NAME): ${OBJS}
	$(CC) $(CPP_FLAGS) $(CPP_VERSION) $(OBJS) -o $(NAME)

.cpp.o:
	$(CC) $(CPP_FLAGS) $(CPP_VERSION) -c $< -o $@

clean:
	rm -f *.o
	
fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
