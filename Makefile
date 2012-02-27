CC = gcc
LFLAGS = -O2 -Wall
CFLAGS = -Wall -std=c99 -lglfw -lGL -lX11 -lXrandr -lpthread -ldl

.PHONY: gldl,all,exec

all:
	@make gldl
	@make exec

gldl:
	gcc GL/gldl.c -c -o GL/gldl.o $(LFLAGS)

exec:
	gcc gldltest.c GL/gldl.o -o bin/gldltest $(CFLAGS)
