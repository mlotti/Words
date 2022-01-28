#include <iostream>

#include "Test.h"

int main()
{

  Test test;

  std::cout << "---------------------- " << "\n";

  std::cout << "RUNNING testReading: " << "\n";
  test.print(test.testReading());

  std::cout << "---------------------- " << "\n";

  return 0;
}
