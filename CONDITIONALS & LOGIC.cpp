//1/8
//Introduction to Conditionals & Logic

//2/8
//Coin Flip Demo (only a demo) 
#include <iostream>
#include <stdlib.h>
#include <ctime>

int main() {
  
  // Create a number that's 0 or 1
  
  srand (time(NULL));
  int	coin = rand() % 2;
  
  // If number is 0: Heads
  // If it is not 0: Tails
  
  if (coin == 0) {
  
    std::cout << "Heads\n";
  
  }
	else {
	
    std::cout << "Tails\n";
  
  }
  
}

//3/8
//If Statement
#include <iostream>

int main() {

  int grade = 90;
  if (grade > 60) {
    
    std::cout << "Pass";
  }
  
  
}
