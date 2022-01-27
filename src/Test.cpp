#include <iostream>
#include <vector>

#include "Test.h"
#include "Text.h"

Test::Test(){

}

Test::~Test(){

}

bool Test::testReading() {
  Text t;
  t.addWord("Start");
  t.addWord("End");
  return t.getWords().front() == "Start";
}

bool Test::testPunctuation() {
  Text t;
  t.addWord("Start*");
  t.addWord("End!");
  t.addWord("End!");
  t.removePunctuation();
  return t.getWords().front() == "Start" && t.getWords().back() == "End";
}

bool Test::testOccurence() {
  Text t;
  t.addWord("that");
  t.addWord("test");
  t.addWord("that");
  return t.countOccurence("that") == 2;
}

bool Test::testGetOccurenceMap() {
  Text t;
  t.addWord("do");
  t.addWord("that");
  t.addWord("do");
  return t.getOccurenceMap().count("do") && t.getOccurenceMap().find("do")->second == 2;
}

void Test::print(bool result) {
  if (result) {
    std::cout << "TEST PASSED" << "\n";
  } else {
    std::cout << "TEST FAILED" << "\n";
  }
  return;
}
