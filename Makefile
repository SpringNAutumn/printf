NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Werror -Wextra
SOURCE = conversions.c ft_printf.c
OBJECTS = $(SOURCE:.c=.o)
REMOVE = rm -f

all: $(NAME)

$(NAME):$(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

clean:
	$(REMOVE) $(OBJECTS)

fclean:
	$(REMOVE) $(NAME)

re:
	clean all 

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re
