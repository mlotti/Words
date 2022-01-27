# Words

Count the occurrence of each unique word in a file. The words are read as a default from test/test.txt file in to a vector and after being cleaned, the words are connected to their occurence counts using a map. 

Using a file test/text.txt
```c++
Go do, that! thing that you do so well
We test test test test this further
```

Compiling and running:
```console
$ make
$ ./test.exe
---------------------- 
RUNNING testReading: 
TEST PASSED
RUNNING testPunctuation: 
TEST PASSED
RUNNING testOccurence: 
TEST PASSED
RUNNING testGetOccurenceMap: 
TEST PASSED
---------------------- 
 Result on test.txt 
 1: Go
 1: We
 2: do
 1: further
 1: so
 4: test
 2: that
 1: thing
 1: this
 1: well
 1: you
```

# TO-DO: 

* Speed up
* Further cleaning of text 

# Future exstensions

* What is the most common word? 
* What is the amount of words?
* What is the longest word?

