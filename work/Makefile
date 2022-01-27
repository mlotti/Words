CFLAGS = -O -std=c++11
CC = g++
INC = -I../interface -I. -I../src

all: Text.o Test.o main.o
	$(CC) $(CFLAGS) -o test.exe main.o Text.o Test.o
main.o: main.cpp
	$(CC) $(CFLAGS) $(INC) -c main.cpp
Test.o: ../src/Test.cpp
	$(CC) $(CFLAGS) $(INC) -c ../src/Test.cpp
Text.o: ../src/Text.cpp
	$(CC) $(CFLAGS) $(INC) -c ../src/Text.cpp
clean:
	rm -f core *.o
