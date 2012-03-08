CC = gcc
LFLAGS = -Wall -std=c99 -g
CFLAGS = -Wall -std=c99 -lglfw -lGL -lX11 -lXrandr -lpthread -ldl -g

.PHONY: gldl,all,exec,clean

all:
	@make gldl
	@make exec

gldl: 
	@gcc GL/gldl.c -c -o GL/gldl.o $(LFLAGS)
	@echo "CC	gldl.c"
	@gcc GL/gldl_funcarray.c -c -o GL/gldl_funcarray.o $(LFLAGS)
	@echo "CC	gldl_funcarray.c"
	@ar r gldl.a GL/gldl.o GL/gldl_funcarray.o
	@ranlib gldl.a
	@echo "AR	gldl.a"

exec:
	@gcc gldltest.c gldl.a -o bin/gldltest $(CFLAGS)
	@echo "CC	gldltest.c"

clean:
	@rm -f bin/gldltest
	@rm -f GL/gldl.o
