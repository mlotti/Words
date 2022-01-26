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
  t.read("../test/test1.txt");
  return t.getWords().front() == "Go";
}

bool Test::testOccurence() {
  Text t;
  t.read("../test/test2.txt");
  return t.countOccurence("that") == 2;
}

bool Test::testGetOccurenceMap() {
  Text t;
  t.read("../test/test1.txt");
  return t.getOccurenceMap().count("do") && t.getOccurenceMap().find("do")->second == 2;
}
