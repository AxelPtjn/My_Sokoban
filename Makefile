##
## EPITECH PROJECT, 2022
## B-CPE-101-LYN-1-1-myprintf-axel.petitjean
## File description:
## Makefile
##

SRC	=	src/main.c \
		lib/my_printf.c \
		lib/my_putchar.c \
		lib/my_put_nbr.c \
		lib/my_putstr.c \
		lib/str_to_int.c \
		lib/my_put_table.c \
		lib/my_strlen.c \
		lib/create_table.c \
		src/get_condition.c \
		src/get_pos_player.c \
		src/condition.c \

OBJ = $(SRC:.c=.o)

CFLAGS	=	-g3

NAME = my_sokoban

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -o my_sokoban $(OBJ) -w -lncurses $(CFLAGS)
		rm $(OBJ)
clean:
		rm -f $(OBJ)

fclean: clean
		rm -f *.a $(NAME)

re:		fclean all
