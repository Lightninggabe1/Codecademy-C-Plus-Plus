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

//6/8
//Else If
#include <iostream>

int main() {
  
  double ph = 4.6;
  
  // Write the if, else if, else here:
  if (ph > 7) {
    std::cout << "Basic";
  }
  else if (ph < 7) {
    std::cout << "Acidic";
  }
  else {
    std::cout << "Neutral";
  }
  
  
  
  
}

//7/8
//Switch Statement
#include <iostream>

int main() {
  
  int number = 9;
  
  switch(number) {
    
    case 1 :
      std::cout << "Bulbusaur\n";
      break;
    case 2 :
      std::cout << "Ivysaur\n";
      break;
    case 3 :
      std::cout << "Venusaur\n";
      break;
    case 4 :
      std::cout << "Charmander\n";
      break;
    case 5 :
      std::cout << "Charmeleon\n";
      break;
    case 6 :
      std::cout << "Charizard\n";
      break;
    case 7 :
      std::cout << "Squirtle\n";
      break;
    case 8 :
      std::cout << "Wartortle\n";
      break;
    case 9 :
      std::cout << "Blastoise\n";
      break;
    default :
      std::cout << "Unknown\n";
      break;
  
  }
  
}

//8/8
//Review
#include <iostream>

int main() {
  double weight;
  int planet;
  std::cout << "Enter your Earth weight: \n";
  std::cin >> weight;
  std::cout << "\n";
  std::cout << "Enter the number of the planet you wish to fight on: \n";
  std::cin >> planet;
  switch (planet) {
    case 1 :
      weight = weight * 0.38;
      break;
    case 2 :
      weight = weight * 0.91;
      break;
    case 3 :
      weight = weight * 0.38;
      break;
    case 4 :
      weight = weight * 2.34;
      break;
    case 5 :
      weight = weight * 1.06;
      break;
    case 6 :
      weight = weight * 0.92;
      break;
    case 7 :
      weight = weight * 1.19;
      break;
  }
  std::cout << "Your weight is " << weight << "\n";
}
