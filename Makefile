
CC: g++
CFLAGS: -Wall

all: run main bst

run: %.o
	$(CC) $< -o $@

main.o: main.cc bst.h
    $(CC) -c $(CPPFLAGS) $< -o $@

bst.o: bst.cc bst.h
    $(CC) -c $(CPPFLAGS) $< -o $@

clean:
    rm -f *.o