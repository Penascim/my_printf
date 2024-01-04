SRCS =	ft_str.c \
		ft_unsigned.c \
		ft_utoa_base.c \
		ft_char.c \
		ft_hex.c \
		ft_int.c \
		ft_itoa.c \
		ft_pointer.c \
		ft_printf.c

OBJS = $(SRCS:.c=.o)

RM = rm -rf
CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

all:	$(NAME)

$(NAME):	$(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean	all

.PHONY:	all clean fclean re

