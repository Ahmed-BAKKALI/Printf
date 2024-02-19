CFLAGS = -Wall -Wextra -Werror
CC = cc

SRC = ft_putstr.c ft_putnbr.c ft_printf.c ft_putchar.c ft_putuns.c ft_puthexa.c ft_putadress.c


OBJ = ${SRC:.c=.o}

NAME = libftprintf.a

all:${NAME}

${NAME}:${OBJ}
	ar -rcs ${NAME} ${OBJ}

%.o:%.c ft_printf.h
	${CC} ${CFLAGS} -c $< -o $@
clean: 
	rm -rf ${OBJ} 
fclean: clean 
	rm -rf ${NAME}
re: fclean all