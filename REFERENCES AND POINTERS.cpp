//1/9: Introduction

//2/9: References
#include <iostream>

int main() {
  
  int soda = 99;
  int &pop = soda;
  pop += 1;
  std::cout << soda << "\n" << pop;

}

//3/9: Pass-By-Reference
#include <iostream>

int triple(int &i) {

  i = i * 3;
  
  return i;

}

int main() {
  
  int num = 1;
  
  std::cout << triple(num) << "\n";
  std::cout << triple(num) << "\n";

}

//4/9: Pass-By-Reference with Const
#include <iostream>

int square(int const &i) {

  return i * i;

}

int main() {
  
  int side = 5;
  
  std::cout << square(side) << "\n";

}

//5/9: Memory Address
#include <iostream>

int main() {
  
  int power = 9000;
  
  // Print power
  std::cout << power << "\n";
  
  // Print &power
  std::cout << &power;
  
}

//6/9: Pointers
#include <iostream>

int main() {
  
  int power = 9000;
  
  // Create pointer
  int* ptr = &power;
  
  // Print ptr
  std::cout << ptr;
  
}

//7/9: Dereference
#include <iostream>

int main() {
  
  int power = 9000;
  
  // Create pointer
  int* ptr = &power;
  
  // Print ptr
  std::cout << ptr << "\n";
  
  // Print *ptr
  std::cout << *ptr;
  
}

//8/9: Null Pointer
#include <iostream>

int main() {
  
  int power = 9000;
  
  // Create pointer
  int* ptr = nullptr;
  
  // Later in the program...
  ptr = &power;
  
  // Print ptr
  std::cout << ptr << "\n";
  
}

//9/9: Review
