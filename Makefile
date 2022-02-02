NAME = libs.a
SRCS = s_strlen.c \
	   s_strlcpy.c \
	   s_isalpha.c \
	   s_isdigit.c \
	   s_isalnum.c \
	   s_isprint.c \
	   s_isascii.c \
	   s_toupper.c \
	   s_tolower.c \
	   s_strlcat.c \
	   s_memset.c \
	   s_bzero.c \
	   s_memchr.c

OBJS = ${SRCS:.c=.o}
CC = gcc
FLAGS = -Wextra -Wall -Werror
RM = rm -f
LIBC = ar -rc

.c.o :
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME} : ${OBJS}
	${LIBC} ${NAME} ${OBJS}

all : ${NAME}

program :
	${CC} ${FLAGS} mains.c -ls -L. -o libs

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}
re : fclean all

.PHONY: all clean fclean re .c.o
