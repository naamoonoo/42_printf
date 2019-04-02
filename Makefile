NAME=libftprintf.a

SRC=$(wildcard src/*.c)
LRC=$(wildcard lib/libft/*.c)
CC=gcc
CFLAGS=-Wall -Wextra -Werror -Iincludes
OBJ = $(patsubst %.c, %.o, $(SRC))
LOBJ = $(patsubst %.c, %.o, $(LRC))

all: $(NAME)

$(NAME): obj $(OBJ) $(LOBJ)
	ar rc $(NAME) $(OBJ) $(LOBJ)
	ranlib $(NAME)

obj:
	mkdir obj

obj/%.o: src/%.c
	gcc $(CFLAGS) $(OPTION) -c -o $@ $<

clean:
	-cd lib/libft && make clean
	# -cd src && make clean

fclean: clean
	-cd lib/libft && make fclean
	# -cd src && make clean
	-rm -f $(NAME)
	-rm -f libft.a

re: fclean $(NAME)

.PHONY: clean fclean re
