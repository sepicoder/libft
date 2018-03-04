# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shomami <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/21 16:55:52 by shomami           #+#    #+#              #
#    Updated: 2018/03/02 00:11:17 by shomami          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a

CFLAGS = -Wall -Wextra -Werror -c

SRCS = *.c

HEADER = *.h

all : $(NAME)

$(NAME) :
	gcc $(CFLAGS) $(SRCS) -I $(HEADER)
	ar rc $(NAME) *.o
	ranlib $(NAME)

clean:
	/bin/rm -f *.o *.gch

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
