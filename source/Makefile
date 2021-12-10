CC = g++
CXXFLAGS = -O2 -Wall

all: main.o bst.o run

run: main.o bst.o
	$(CC) $(CXXFLAGS) -o run.exe main.o bst.o

main.o: main.cc bst.cc bst.h
	$(CC) $(CXXFLAGS) -c -o $@ $<

bst.o: bst.cc bst.h
	$(CC) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -f *.exe *.o
