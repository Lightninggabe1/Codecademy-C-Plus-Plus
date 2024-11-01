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

//5/10: Return Types - Beyond the Void
#include <iostream>

// Change needs_it_support so that it returns support:
bool needs_it_support() {
  
  bool support;
  
  std::cout << "Hello. IT. Have you tried turning it off and on again? Enter 1 for yes, 0 for no.\n";
  std::cin >> support;
  return support;
  
}

int main() {
  
  // Change the following line to print the function result:
  std::cout << needs_it_support();
  
}

//6/10: How Return Values Work

//7/10: Parameters & Arguments
#include <iostream>

// Define get_emergency_number() below:
void get_emergency_number(std::string emergency_number) {
  std::cout << "Dial " << emergency_number;
}

int main() {
  
  // Original emergency services number 
  std::string old_emergency_number = "999";
  
  // For nicer ambulances, faster response times
  // and better-looking drivers
  std::string new_emergency_number = "0118 999 881 999 119 725 3";
  
  // Call get_emergency_number() below with
  // the number you want!
  get_emergency_number(new_emergency_number);
  
}

//8/10: Tackling Multiple Arguments
#include <iostream>

// Define name_x_times() below:
void name_x_times(std::string name, int x) {
  while (x > 0) {
    std::cout << name;
    x--;
  }
}

int main() {
  
  std::string my_name = "core";
  int some_number = 5; // Change this if you like!
  // Call name_x_times() below with my_name and some_number
  name_x_times(my_name, some_number);
  
}

//9/10: How Parameters & Arguments Work

//10/10: Review of C++ Functions
#include <iostream>

int main() {
  
  // Conduct IT support
  std::string on_off_attempt;
  std::cout << "Hello. IT.\n";
  std::cout << "Have you tried turning it off and on again? y/n\n";
  std::cin >> on_off_attempt;
  
  // Check in with Jenn
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
