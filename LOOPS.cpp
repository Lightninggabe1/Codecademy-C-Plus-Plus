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
