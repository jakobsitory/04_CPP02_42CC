# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jschott <jschott@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/09 10:31:55 by jschott           #+#    #+#              #
#    Updated: 2023/12/22 14:39:35 by jschott          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed_point

# SOURCES
SRCS = 	main.cpp \
		Fixed.cpp

# INCLUDES
HDRS = harl.hpp

# COMPILATION CMNDS
CC = c++
FT_FLAGS = -Wall -Wextra -Werror -std=c++98 -g

all: $(NAME)
	@echo "\n\nCompilation finished successfully\nHave fun breaking things\n"

$(NAME): $(SRCS)
	@echo "\n\nCompiling Executable\n"
	$(CC) $(FT_FLAGS) -o $(NAME) $(SRCS)
	@echo "\nExecutable compiled\n\n"

clean: 
	@rm -f $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
