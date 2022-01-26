#include <iostream>
#include <map>

#include "Text.h"
#include "Test.h"

int main()
{
    std::map<std::string, int> result;

    Text text;
    Test test;

    if (1) {
      std::cout << "TEST 1 PASSED: " << test.testReading() << "\n";
      std::cout << "TEST 2 PASSED: " << test.testOccurence() << "\n";
    }

    text.read("../test/test.txt");

    // removes dots, commas, question marks, etc.

    text.removePunctuation();


    for (auto &x : text.getWords()) {
      if (result.count(x)) {
	// Check if the word is part of the map and increment the occurence
        result.find(x)->second++;
      } else {
	// if the word is new we insert it to the map
        result.insert(std::pair<std::string, int>(x, 1));
      }
    }

    // Print the occurence of all words in the map
    for (auto &x : result) {
      std::cout << " " << x.second << ": " << x.first << "\n";
    }

    return 0;
}
