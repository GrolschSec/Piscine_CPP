# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: romain <romain@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/11 12:50:14 by romain            #+#    #+#              #
#    Updated: 2023/12/11 22:18:40 by romain           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

NAME = Serializer

CPP_FLAGS = -Wall -Werror -Wextra

CPP_VERSION = -std=c++98

SRCS =	main.cpp		\
		Serializer.cpp				

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
