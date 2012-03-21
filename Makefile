CC = gcc
LFLAGS = -Wall -lglfw -g
CFLAGS = -Wall -lglfw -lGL -lX11 -lXrandr -lpthread -ldl -g

.PHONY: gldl,all,exec,clean

all:
	@make gldl
	@make exec

gldl: 
	@gcc GL/gldl.c -c -o GL/gldl.o $(LFLAGS)
	@echo "CC	gldl.c"
	#@ar r libgldl.a GL/gldl.o GL/gldl_funcarray.o
	#@ranlib libgldl.a
	#@echo "AR	libgldl.a"

exec:
	@gcc gldltest.c GL/gldl.o -o bin/gldltest $(CFLAGS)
	@echo "CC	gldltest.c"

clean:
	@rm -f bin/gldltest
	@rm -f GL/gldl.o
