NAME = libft.a

RM = rm -f

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRCS =	ft_bzero.c	\
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memcpy.c \
		ft_memset.c	\
		ft_strlen.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

$.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
