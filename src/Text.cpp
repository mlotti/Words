#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <map>
#include <cctype>

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

void Text::addWord(std::string word) {
  words.push_back(word);
}

int Text::countOccurrence(std::string word) {

  int count = 0;
  for (auto &w : words) {
    if (w == word) {
      count++;
    }
  }
  return count;
}

std::map<std::string, int> Text::getOccurrenceMap() {

  std::map<std::string, int> result;

  for (auto &word : words) {
    // Check if the word is part of the map
    if (result.count(word)) {
      // Increment the occurrence by one
      result.find(word)->second++;
    } else {
      // if the word is new we insert it to the map
      result.insert(std::pair<std::string, int>(word, 1));
    }
  }
  return result;
}

void Text::removePunctuation(){

  for (auto &word : words) {
    for (int i = 0, len = word.size(); i < len; i++)  {
      if (ispunct(word[i])) {
        word.erase(i--, 1);
        len = word.size();
      }
    }
  }
  return;
}

void Text::lowerCaseWords() {

  for (auto &word : words) {
    for (int i = 0; i < word.size(); i++)  {
      if (!ispunct(word[i]) && !isdigit(word[i]) && isupper(word[i])) {
        word[i] = tolower(word[i]);
      }
    }
  }
  return;
}


