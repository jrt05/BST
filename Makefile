CC = g++
CXXFLAGS = -O2 -Wall

all: main.o bst.o run

run: main.o bst.o
	$(CC) $(CXXFLAGS) -o run.exe main.o bst.o

main.o: source/main.cc source/bst.cc bst.h
	$(CC) $(CXXFLAGS) -c -o $@ $<

bst.o: source/bst.c source/bst.h
	$(CC) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -f *.exe *.o
