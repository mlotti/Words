#ifndef TEXT_H
#define TEXT_H

#include <vector>
#include <map>

class Text {
 private:
  std::vector<std::string> words;
 public:

  Text();
  ~Text();

  void read(std::string fileName);

  int countOccurence(std::string word);

  std::vector<std::string> getWords() {return words;}

  std::map<std::string, int> getOccurenceMap();

  void removePunctuation();

  void lowerCaseWords();

};

#endif
