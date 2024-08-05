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

//4/8
//Relational Operators
//When writing conditional statements, sometimes we need to use different types of operators to compare values. These operators are called relational operators.
//To have a condition, we need relational operators:
//== equal to
//!= not equal to
//> greater than
//< less than
//>= greater than or equal to
//<= less than or equal to
//Relational operators compare the value on the left with the value on the right.
#include <iostream>

int main() {

  int grade = 90;
  
  if (grade != 60) {
  
    std::cout << "Pass\n";
  
  }
  
}

//5/8
//Else Clause
#include <iostream>

int main() {

  int grade = 59;

  if (grade > 60) {

    std::cout << "Pass\n";

  }
  else {

    std::cout << "Fail\n";

  } 
  
}
