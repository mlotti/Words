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

    std::cout << "RUNNING testLowerCaseWords: " << "\n";
    test.print(test.testLowerCaseWords());

    std::cout << "RUNNING testOccurrence: " << "\n";
    test.print(test.testOccurrence());

    std::cout << "RUNNING testGetOccurrenceMap: " << "\n";
    test.print(test.testGetOccurrenceMap());

    std::cout << "---------------------- " << "\n";
  }

  text.read("test/test.txt");

  // removes dots, commas, question marks, etc.
  text.removePunctuation();

  // all words to lowercase
//  text.lowerCaseWords();

  // creates the map with unique words and their occurrences
  result = text.getOccurrenceMap();


  // if you want to find the number of occurrences of a word
  // check if the word is part of the map
/*
  std::string word = "do";
  if (result.count(word)) {
     std::cout << result.find(word)->second << "\n";
  } else {
     std::cout << word << "not part of the occurrence map" << "\n";
  }
*/

  std::cout << " Result using file: test.txt " << "\n";

  // Print the occurence of all words in the map
  for (auto &element : result) {
    std::cout << " " << element.second << ": " << element.first << "\n";
  }

  return 0;
}
