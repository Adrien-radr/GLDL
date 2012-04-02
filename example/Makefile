CC = gcc
LFLAGS = -Wall -O2
CFLAGS = -Wall -lglfw -lGL -lX11 -lXrandr -lpthread -ldl -g

.PHONY: gldl,all,exec,clean

all:
	@make gldl
	@make exec

gldl: 
	@$(CC) $(LFLAGS) -c ../GL/gldl.c -o ../GL/gldl.o
	@echo "CC	gldl.c"
	# For a Static Library, do :
	# @ar r libgldl.a ../GL/gldl.o
	# @ranlib libgldl.a
	@echo "AR	libgldl.a"

exec:
	@$(CC) gldltest.c ../GL/gldl.o -o gldltest $(CFLAGS)
	# With static lib, replace this by :
	# @$(CC) gldltest.c libgldl.a -o gldltest $(CFLAGS)
	@echo "CC	gldltest.c"

clean:
	@rm -f gldltest
	@rm -f ../GL/gldl.o
