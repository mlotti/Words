#ifndef TEST_H
#define TEST_H

#include <vector>

class Test {
 private:

 public:

  Test();
  ~Test();

  bool testReading();

  bool testPunctuation();

  bool testOccurence();

  bool testGetOccurenceMap();

  void print(bool result);
};


#endif
