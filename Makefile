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
	   s_memchr.c \
	   s_memcpy.c \
	   s_strchr.c \
	   s_memcmp.c \
	   s_atoi.c \
	   s_strncmp.c \
	   s_strnstr.c \
	   s_strrchr.c \
	   s_memmove.c \
	   s_calloc.c \
	   s_strdup.c \
	   s_putchar_fd.c \
	   s_putstr_fd.c \
	   s_putendl_fd.c \
	   s_putnbr_fd.c 

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
