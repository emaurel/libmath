##
## EPITECH PROJECT, 2022
## B-MAT-100-MPL-1-1-101pong-edgar.maurel
## File description:
## Makefile
##

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
TARGET = ../libmath.a
CPPFLAGS = -I./

all : $(TARGET)

$(TARGET) : $(OBJ)
	ar rsc $@ $(OBJ)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(TARGET)

re : fclean all

test : re
	gcc main/main.c *.c -I./