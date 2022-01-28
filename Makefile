CFLAGS = -O -std=c++11
CC = g++
INC = -I./interface -I./src

all: ./bin/Text.o ./bin/Test.o ./bin/my_test.o ./bin/test_reading.o ./bin/test_punctuation.o ./bin/test_lowerCaseWords.o ./bin/test_occurrence.o ./bin/test_getOccurrenceMap.o
	$(CC) $(CFLAGS) -o ./test/my_test.exe ./bin/my_test.o ./bin/Text.o ./bin/Test.o
	$(CC) $(CFLAGS) -o ./test/test_reading.exe ./bin/test_reading.o ./bin/Text.o ./bin/Test.o
	$(CC) $(CFLAGS) -o ./test/test_punctuation.exe ./bin/test_punctuation.o ./bin/Text.o ./bin/Test.o
	$(CC) $(CFLAGS) -o ./test/test_lowerCaseWords.exe ./bin/test_lowerCaseWords.o ./bin/Text.o ./bin/Test.o
	$(CC) $(CFLAGS) -o ./test/test_occurrence.exe ./bin/test_occurrence.o ./bin/Text.o ./bin/Test.o
	$(CC) $(CFLAGS) -o ./test/test_getOccurrenceMap.exe ./bin/test_getOccurrenceMap.o ./bin/Text.o ./bin/Test.o

./bin/my_test.o: ./test/my_test.cpp
	$(CC) $(CFLAGS) $(INC) -c ./test/my_test.cpp -o ./bin/my_test.o

./bin/test_reading.o: ./test/test_reading.cpp
	$(CC) $(CFLAGS) $(INC) -c ./test/test_reading.cpp -o ./bin/test_reading.o
./bin/test_punctuation.o: ./test/test_punctuation.cpp
	$(CC) $(CFLAGS) $(INC) -c ./test/test_punctuation.cpp -o ./bin/test_punctuation.o
./bin/test_lowerCaseWords.o: ./test/test_lowerCaseWords.cpp
	$(CC) $(CFLAGS) $(INC) -c ./test/test_lowerCaseWords.cpp -o ./bin/test_lowerCaseWords.o
./bin/test_occurrence.o: ./test/test_occurrence.cpp
	$(CC) $(CFLAGS) $(INC) -c ./test/test_occurrence.cpp -o ./bin/test_occurrence.o
./bin/test_getOccurrenceMap.o: ./test/test_getOccurrenceMap.cpp
	$(CC) $(CFLAGS) $(INC) -c ./test/test_getOccurrenceMap.cpp -o ./bin/test_getOccurrenceMap.o

./bin/Test.o: ./src/Test.cpp
	$(CC) $(CFLAGS) $(INC) -c ./src/Test.cpp -o ./bin/Test.o
./bin/Text.o: ./src/Text.cpp
	$(CC) $(CFLAGS) $(INC) -c ./src/Text.cpp -o ./bin/Text.o
clean:
	rm -f ./bin/*.o
