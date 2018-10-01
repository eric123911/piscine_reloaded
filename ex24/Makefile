NAME	= libft.a
FLAGS 	= -Wall -Werror -Wextra
CFLAGS	= $(FLAGS) -Iincludes -c
FILES	= ./srcs/ft_putchar.c \
	  ./srcs/ft_putstr.c \
	  ./srcs/ft_strcmp.c \
	  ./srcs/ft_strlen.c \
	  ./srcs/ft_swap.c
OBJ	= $(FILES:.c=.o)

all: $(NAME)



$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) test

re: fclean all

.PHONY: clean fclean all re
