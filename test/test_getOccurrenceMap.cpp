#include <iostream>

#include "Test.h"

int main()
{
  Test test;

  std::cout << "---------------------- " << "\n";

  std::cout << "RUNNING testGetOccurenceMap: " << "\n";
  test.print(test.testGetOccurrenceMap());

  std::cout << "---------------------- " << "\n";

  return 0;
}
