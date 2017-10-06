CC       = gcc
CFLAGS   = -Wall -std=c11 -g

all: caltool

caltool: caltool.o calutil.o

caltool.o: caltool.c caltool.h

calutil.o: calutil.c calutil.h

clean:
	rm -f *.o caltool Cal.so
