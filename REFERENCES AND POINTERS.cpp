//1/9: Introduction

//2/9: References
#include <iostream>

int main() {
  
  int soda = 99;
  int &pop = soda;
  pop += 1;
  std::cout << soda << "\n" << pop;

}
