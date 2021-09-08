##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	./game/my_sokoban.c	\
		./game/my_sokoban.h	\
		./game/sizemap.c	\
		./game/move.c	\
		./game/buffer.c	\
		./game/map2.c	\
		./score/win_loose.c	\
		./error_map/error.c	\
		./error_map/error_2.c	\
		./error_map/error_3.c	\
		./lib/my/my_printf.c	\
		./lib/my/my_putchar.c	\
		./lib/my/my_put_nbr.c	\
		./lib/my/my_putstr.c	\
		./lib/my/my_getnbr.c	\
		./lib/my.h	\

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -lncurses $(SRC) -o $(NAME)

clean:
	rm error_map/*.o
	rm game/*.o
	rm score/*.o
	rm lib/my/*.o

fclean: clean
	rm $(NAME)

re:	all
	make clean
