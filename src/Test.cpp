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
  t.addWord("!E#!nd!");
  t.removePunctuation();
  assert(t.getWords().front() == "Start" && t.getWords().back() == "End");
  return t.getWords().front() == "Start" && t.getWords().back() == "End";
}

bool Test::testOccurrence() {
  Text t;
  t.addWord("that");
  t.addWord("test");
  t.addWord("that");
  assert(t.countOccurrence("that") == 2);
  return t.countOccurrence("that") == 2;
}

bool Test::testGetOccurrenceMap() {
  Text t;
  t.addWord("do");
  t.addWord("that");
  t.addWord("do");
  assert(t.getOccurrenceMap().count("do") && t.getOccurrenceMap().find("do")->second == 2);
  return t.getOccurrenceMap().count("do") && t.getOccurrenceMap().find("do")->second == 2;
}

bool Test::testLowerCaseWords() {
  Text t;
  t.addWord("StaRt");
  t.addWord("END");
  t.lowerCaseWords();
  assert(t.getWords().front() == "start" && t.getWords().back() == "end");
  return t.getWords().front() == "start" && t.getWords().back() == "end";
}

void Test::print(bool result) {
  if (result) {
    std::cout << "TEST PASSED" << "\n";
  } else {
    std::cout << "TEST FAILED" << "\n";
  }
  return;
}

