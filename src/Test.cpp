#include <iostream>
#include <vector>
#include <cassert>

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
  assert (t.getWords().front() == "Start");
  return t.getWords().front() == "Start";
}

bool Test::testPunctuation() {
  Text t;
  t.addWord("Start*");
  t.addWord("End!");
  t.addWord("End!");
  t.removePunctuation();
  assert(t.getWords().front() == "Start" && t.getWords().back() == "End");
  return t.getWords().front() == "Start" && t.getWords().back() == "End";
}

bool Test::testOccurence() {
  Text t;
  t.addWord("that");
  t.addWord("test");
  t.addWord("that");
  assert(t.countOccurence("that") == 2);
  return t.countOccurence("that") == 2;
}

bool Test::testGetOccurenceMap() {
  Text t;
  t.addWord("do");
  t.addWord("that");
  t.addWord("do");
  assert(t.getOccurenceMap().count("do") && t.getOccurenceMap().find("do")->second == 2);
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
