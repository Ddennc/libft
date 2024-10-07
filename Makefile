NAME = libft.a
CC = gcc
CCFLAGS = -Wextra -Werror -Wall
AR = ar rcs

SRC = $(wildcard *.c)
OBJS = $(SRC:%.c=%.o)
BONUS_SRCS = $(addsuffix .c, $(BONUS_SRC))
BONUS_OBJS = $(addsuffix .o, $(BONUS_SRC))

all: $(NAME)

%.o: %.c
	$(CC) -I. $(CCFLAGS) -o $@ -c $<

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	ranlib $(NAME)
bonus: $(OBJS) $(BONUS_OBJS)
	$(AR) $(NAME) $^
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
