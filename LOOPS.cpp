//Introduction to Loops 1/7
//While Loop Demo 2/7
#include <iostream>

int main() {
  
  int pin = 0;
  int tries = 0;
  
  std::cout << "BANK OF CODECADEMY\n";
  
  std::cout << "Enter your PIN: ";
  std::cin >> pin;

  tries++;

  while (pin != 1234 && tries < 3) {
    
    std::cout << "Enter your PIN: ";
    std::cin >> pin;
    tries++;
    
  }
  
  if (pin == 1234) {
    
    std::cout << "PIN accepted!\n";
    std::cout << "You now have access.\n"; 
    
  }
  
}

//Guess Number 3/7
#include <iostream>

int main() {

  int guess;
  
  int tries = 0;

  std::cout << "I have a number 1-10.\n";
  std::cout << "Please guess it: ";
  std::cin >> guess;
 
  // Write a while loop here:
  while (guess != 8 && tries < 50) {
  
  std::cout << "Wrong guess, try again: ";
  std::cin >> guess;

  tries++;
 
}
  
  
  
  
  if (guess == 8) {
    
    std::cout << "You got it!\n";
  
  }  
  
}

//While Loop 4/7
#include <iostream>

int main() {
  
  int i = 0;
  int square = 0;
  
  // Write a while loop here:
  while (i < 10) {
    square = i*i;
    std::cout << i << "   " << square << "\n";
    i += 1;
  }
  
  
  
  
}

//For Loop Demo 5/7
#include <iostream>

int main() {

  for (int i = 0; i < 10; i++) {
    
    std::cout << "I will not throw paper airplanes in class.\n";
    
  }
  
}

//99 Bottles 6/7
#include <iostream>

int main() {

  // Write a for loop here:
  for (int bottles = 99; bottles > 0;bottles--) {
    std::cout << bottles << " bottles of pop on the wall.\n";
    std::cout << "Take one down and pass it around.\n";
    std::cout << bottles-1 << " bottles of pop on the wall.\n";
    std::cout << "\n";
  }
  std::cout << "No more bottles of pop on the wall.\n";
  std::cout << "No more bottles of pop.\n";
  std::cout << "Go to the store and buy some more,\n";
  std::cout << "99 bottles of pop on the wall.\n";
  
  
    
  
  
}
//Review 7/7
#include <iostream>

int main() {
  
  
  
  
  
  
  
  
  
  
  
  
}
