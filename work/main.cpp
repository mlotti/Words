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

  // creates the map with unique words and their occurances
  result = text.getOccurenceMap();

  // Print the occurence of all words in the map
  for (auto &x : result) {
    std::cout << " " << x.second << ": " << x.first << "\n";
  }

    return 0;
}
