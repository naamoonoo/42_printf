# NAME=libftprintf.a
NAME=libftprintf

SRC=$(wildcard src/*.c)
CC=gcc
# CFLAGS=-Wno-format -Iincludes -g -fsanitize=address
CFLAGS=-Wall -Wextra -Werror -Iincludes -g -fsanitize=address
# // -g -fsanitize=address
OBJ = $(patsubst %.c, %.o, $(SRC))

all: $(NAME)

$(NAME): $(SRC)
	cd src/libft && make -f Makefile
	mv src/libft/libft.a .
	$(CC) -o $(NAME) $(CFLAGS) $(SRC) libft.a

clean:
	-cd src/libft && make clean

fclean: clean
	-cd src/libft && make fclean
	-rm -f $(NAME)
	-rm -f libft.a

re: fclean $(NAME)

.PHONY: clean fclean re

# test: re
#     @clear
#     @echo "testing"
#     @sed "s/printf(/ft_printf(/g" tester.c > ft_tester.c
#     @gcc -g -o printf -Wno-format $(NAME) -I $(INC) tester.c
#     @gcc -g -o ft_printf -Wall -Wextra -Werror $(NAME) -I $(INC) ft_tester.c
#     @./printf > printf.out
#     @./ft_printf > ft_printf.out
#     @diff ft_printf.out printf.out
#     @clear
#     @echo "################"
#     @echo "## GOOD STUFF ##"
#     @echo "################"