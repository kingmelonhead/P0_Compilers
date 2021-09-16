CC=gcc
CFLAGS=-g -lstdc++
all : P0 

P0: main.cpp tree.cpp tree.hpp node.hpp
	$(CC) -o $@ $^ $(CFLAGS) 

clean:
	rm P0 
	rm -r *.dSYM