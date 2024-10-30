//1/10: The Function of Functions
#include <iostream>

int main() {
  
  // Conduct IT support
  std::string on_off_attempt;
  std::cout << "Hello. IT.\n";
  std::cout << "Have you tried turning it off and on again? y/n\n";
  std::cin >> on_off_attempt;
  
  // Check in with Jen
  std::cout << "Oh hi Jen!\n";
  
  // Conduct IT support again...
  std::cout << "Hello. IT.\n";
  std::cout << "Have you tried turning it off and on again? y/n\n";
  std::cin >> on_off_attempt;

  // Check in with Roy
  std::cout << "You stole the stress machine? But that's stealing!\n";
  
  // Conduct IT support yet again...zzzz...
  std::cout << "Hello. IT.\n";
  std::cout << "Have you tried turning it off and on again? y/n\n";
  std::cin >> on_off_attempt;
  
}

//2/10: Built-In Functions
#include <iostream>

int main() {
  
  // This seeds the random number generator:
  srand (time(NULL));
  
  // Use rand() below to initialize the_amazing_random_number
  int the_amazing_random_number = rand() % 29;
  std::cout << the_amazing_random_number;
}

//3/10: Declare & Define

//4/10: Void - The Point of No Return
#include <iostream>

// Define oscar_wilde_quote() below:
void oscar_wilde_quote() {
  std::cout << "The highest, as the lowest, form of criticism is a mode of autobiography.";
}

int main() {
  
  // Call your function here:
  oscar_wilde_quote();
  
}
