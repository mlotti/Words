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

    // Brute force all words
    for (auto &x : text.getWords()) {
      result.insert(std::pair<std::string, int>(x, text.countOccurence(x)));
    }

    // Print the occurence of all words in the map
    for (auto &x : result) {
        std::cout << " " << x.second << ": " << x.first << "\n";
    }

    return 0;
}
