CC = gcc
RM = rm -rf
NAME = push_swap.a
CFLAGS = -Wall -Wextra -Werror
SRCS = main.c commands.c commands2.c commands3.c helper_functions.c controls.c utils.c sort_three.c sort_five.c sort_big.c split.c split_helper.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	$(CC) $(CFLAGS) $(NAME) -o push_swap

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) push_swap

re: fclean all

.PHONY: clean fclean all re
