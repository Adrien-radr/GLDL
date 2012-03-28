CC = gcc
LFLAGS = -Wall -O2
CFLAGS = -Wall -lglfw -lGL -lX11 -lXrandr -lpthread -ldl -g

.PHONY: gldl,all,exec,clean

all:
	@make gldl
	@make exec

gldl: GL/gldl.o
	@echo "CC	gldl.c"
	#@ar r libgldl.a GL/gldl.o GL/gldl_funcarray.o
	#@ranlib libgldl.a
	#@echo "AR	libgldl.a"

GL/%.o: GL/%.c
	@$(CC) $(LFLAGS) -c $< -o $@

exec:
	@$(CC) gldltest.c GL/gldl.o -o bin/gldltest $(CFLAGS)
	@echo "CC	gldltest.c"

clean:
	@rm -f bin/gldltest
	@rm -f GL/gldl.o
