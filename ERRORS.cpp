//Introduction to Bugs 1/6
//Compile-time Errors 2/6
#include <iostream>

int main() {
  
  char answer;
  int score = 0;
  
  std::cout << "Who Wants To Be a Millionaire\n\n";
  
  std::cout << "Question 1)\n\n";
  
  std::cout << "For ordering his favorite beverages on demand, LBJ had four buttons installed in the Oval Office labeled 'Coffee', 'Tea', 'Coke', and what?\n\n";
  
  std::cout << "A. Fresca   B. V8  \n";
  std::cout << "C. Yoo-hoo  D. A&W \n\n";
  
  std::cout << "Enter your answer: ";
  std::cin >> answer;
  
  if (answer == 'A' || answer == 'a') {
    
    score = score + 100;
    std::cout << "Correct!\n";
    
  }
  
}

//Link-time Errors 3/6
#include <iostream>

int main() {
  
  int num = 0;
  int sum = 0;
  
  std::cout << "Enter a number: ";
  std::cin >> num;
  
  for (int i = 1; i <= num; i++) {
    
    sum = sum + i;
    std::cout << i << " ";
    
  }
  
  std::cout << "Sum: " << sum << "\n";
  
}

//Run-time Errors 4/6
#include <iostream>

int main() {
  
  int width = 20;
  int length = 30;

  int ratio = width * length;
  
  std::cout << ratio << "\n";
  
}

//Logic Errors 5/6
//steps.cpp
#include <iostream>

int main() {
  
  // Output from 1 to steps:
  
  int steps = 10;
  
  for (int i = 1; i <= steps; i++) {
    
    std::cout << "Step #";
    std::cout << i << "\n";
    
  }
  //guess.cpp
  // Output from 1 to steps:
  
  int steps;
  
  std::cout << "Enter # steps: ";
  std::cin >> steps;
  
  for (int i = 0; i <= steps; i++) {
    
    std::cout << "Step #";
    std::cout << i << "\n";
    
  }
  
}

//Review 6/6
#include <iostream>
#include <stdlib.h>
#include <ctime>

int main() {
    
  srand (time(NULL));
  int	fortune = rand() % 10;
  
  if (fortune == 0) {

    std::cout << "Flattery will go far tonight.\n";
  
  } 
  else if (fortune == 1) {
    
    std::cout << "Don't behave with cold manners.\n";
  
  } 
  else if (fortune == 2) {
    
    std::cout << "May you someday be carbon neutral\n";
    
  } 
  else if (fortune == 3) {
    
    std::cout << "You have rice in your teeth.\n";
    
  } 
  else if (fortune == 4) {
    
    std::cout << "A conclusion is simply the place where you got tired of thinking.\n";
    
  } 
  else if (fortune ==5) {
    
    std::cout << "No snowflake feels responsible in an avalanche.\n";
    
  } 
  else if (fortune == 6) {
    
    std::cout << "He who laughs last is laughing at you.\n";
    
  } 
  else if (fortune == 7) {
    
    std::cout << "If you look back, you'll soon be going that way.\n";
    
  } 
  else if (fortune == 8) {
    
    std::cout << "You will die alone and poorly dressed.\n";
      
  } 
  else if (fortune == 9) {
    
    std::cout << "The fortune you seek is in another cookie.\n";
      
  }
  
}
