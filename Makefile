// Creamos el makefile para nuestro archivo principal

//
CC = gcc
//
CFLAGS = -Wall -Werror
//
SOURCE = 
//
OBJECTS =  $(SOURCE:.c = .o)

all: $()

//hacemos las reglas para comprobar los sources y objects. 

clean: 

.c.o:
$(CC) $(CFLAGS) -c $< -o$@

fclean:

.PHONY: all clean fclean
