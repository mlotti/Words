#include <iostream>

#include "Test.h"

int main()
{
  Test test;

  std::cout << "---------------------- " << "\n";

  std::cout << "RUNNING testLowerCaseWords: " << "\n";
  test.print(test.testLowerCaseWords());

  std::cout << "---------------------- " << "\n";

  return 0;
}
