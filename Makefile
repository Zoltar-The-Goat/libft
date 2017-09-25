# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ananelli <ananelli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/19 06:01:16 by ananelli          #+#    #+#              #
#    Updated: 2017/09/25 11:45:04 by ananelli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAG = -Wall -Wextra -Werror
OPTION = -c

SRC = ft_*.c
OBJ = *.o

all		:	$(NAME)
$(NAME)	:
				gcc $(FLAG) $(OPTION) $(SRC)
				ar rcs $(NAME) $(OBJ)
clean	:
				rm -f $(OBJ)

fclean	:	clean
				rm -f $(NAME)

re		:	fclean	all

run		:	$(NAME) clean