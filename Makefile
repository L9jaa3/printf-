SRCS = ft_printf.c ft_putchar.c ft_puthex.c ft_putnbr.c \
       ft_putstr.c ft_putunsigned.c ft_putaddr.c

OBJS = ${SRCS:.c=.o}

NAME = libftprintf.a
LIBPRINTFT = ar rcs
RM = rm -f
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJS}
	${LIBPRINTFT} ${NAME} ${OBJS}

%.o: %.c ft_printf.h
	${CC} ${CFLAGS} -c $< -o $@

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
