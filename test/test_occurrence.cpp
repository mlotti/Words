#include <iostream>

#include "Test.h"

int main()
{
  Test test;

  std::cout << "---------------------- " << "\n";

  std::cout << "RUNNING testOccurence: " << "\n";
  test.print(test.testOccurrence());

  std::cout << "---------------------- " << "\n";

  return 0;
}
