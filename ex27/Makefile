#******************************************************************************#
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/10/01 20:50:55 by eschnell     #+#   ##    ##    #+#        #
#    Updated: 2018/10/02 13:28:11 by eschnell    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
#******************************************************************************#

CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = ft_display_file
SRC = ./main.c
OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ)
		$(CC) -o $(NAME) $(OBJ)

$(OBJ):
		$(CC) $(CFLAGS) -c $(SRC)

clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)

re: fclean all
