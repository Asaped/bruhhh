NAME	=	push_swap
SRCS 	=	$(wildcard *.c)
OBJS 	=	$(SRCS:.c=.o)
CC		=	gcc
CFLAGS	=	-Fsanitize=address -Wall -Wextra -Werror
RM		=	rm -f

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) -o $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all
		
