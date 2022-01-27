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
    std::cout << "---------------------- " << "\n";

    std::cout << "RUNNING testReading: " << "\n";
    test.print(test.testReading());

    std::cout << "RUNNING testPunctuation: " << "\n";
    test.print(test.testPunctuation());

    std::cout << "RUNNING testOccurence: " << "\n";
    test.print(test.testOccurence());

    std::cout << "RUNNING testGetOccurenceMap: " << "\n";
    test.print(test.testGetOccurenceMap());

    std::cout << "---------------------- " << "\n";
  }

  text.read("../test/test.txt");

  // removes dots, commas, question marks, etc.
  text.removePunctuation();

  // creates the map with unique words and their occurances
  result = text.getOccurenceMap();

  std::cout << " Result on test.txt " << "\n";

  // Print the occurence of all words in the map
  for (auto &element : result) {
    std::cout << " " << element.second << ": " << element.first << "\n";
  }

    return 0;
}
