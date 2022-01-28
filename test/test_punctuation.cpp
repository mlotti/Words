#include <iostream>

#include "Test.h"

int main()
{

  Test test;

  std::cout << "---------------------- " << "\n";

  std::cout << "RUNNING testPunctuation: " << "\n";
  test.print(test.testPunctuation());

  std::cout << "---------------------- " << "\n";

  return 0;
}
