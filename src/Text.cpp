#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "Text.h"

Text::Text(){

}

Text::~Text(){

}

void Text::read(std::string fileName) {

  std::string word;
  std::ifstream MyFile(fileName);

  if (!MyFile.is_open()) {
    std::cout << "File does not exist" << "\n";
    return;
  }

  while (MyFile >> word) {
    words.push_back(word);
  }

  MyFile.close();

  return;
}

int Text::countOccurence(std::string word) {

  int count = 0;
  for (auto &w : words) {
    if (w == word) {
      count++;
    }
  }
  return count;
}

void Text::removePunctuation(){

  for (auto &word : words) {
    word.erase(std::remove_if(word.begin(), word.end(), ispunct), word.end());
  }
  return;
}

void Text::lowerCaseWords() {

}


